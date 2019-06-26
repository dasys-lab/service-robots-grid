#pragma once

#include "control/containers/AgentCommand.h"

#include <capnzero/CapnZero.h>

namespace essentials {
    class IDManager;
}

namespace control {
    class ContainerUtils {
    public:
        static AgentCommand toAgentCommand(::capnp::FlatArrayMessageReader& msg, essentials::IDManager* idManager);
        static void toMsg(AgentCommand agentCommand, ::capnp::MallocMessageBuilder& builder);
    private:
    private:
        ContainerUtils() = delete;
    };
}