//
// Created by Simon on 22.04.2021.
//
#include "Log.hpp"

#ifdef WP_LOG_ENABLE

#include "spdlog/spdlog.h"
#include <spdlog/sinks/stdout_color_sinks.h>

namespace Warp {

    std::shared_ptr<spdlog::logger> Log::s_Logger;

    void Log::init() {
        std::array<spdlog::sink_ptr, 1> logSinks = {
                std::make_shared<spdlog::sinks::stdout_color_sink_mt>()
        };
        logSinks[0]->set_pattern("[%H:%M:%S] [%n] %v%$");

        s_Logger = std::make_shared<spdlog::logger>("WARP", logSinks.begin(), logSinks.end());
        spdlog::register_logger(s_Logger);

        s_Logger->set_level(spdlog::level::trace);
        s_Logger->flush_on(spdlog::level::trace);
    }
}

#endif