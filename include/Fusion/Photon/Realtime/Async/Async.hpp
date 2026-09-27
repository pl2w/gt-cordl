#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Fusion/Photon/Realtime/Async/AuthenticationFailedException.hpp"
#include "Fusion/Photon/Realtime/Async/DisconnectException.hpp"
#include "Fusion/Photon/Realtime/Async/LoadBalancingClientAsyncExtensions.hpp"
#include "Fusion/Photon/Realtime/Async/OperationException.hpp"
#include "Fusion/Photon/Realtime/Async/OperationHandler.hpp"
#include "Fusion/Photon/Realtime/Async/OperationStartException.hpp"
#include "Fusion/Photon/Realtime/Async/OperationTimeoutException.hpp"
#include "Fusion/Photon/Realtime/Async/PhotonConnectionCallbacks.hpp"
#include "Fusion/Photon/Realtime/Async/PhotonLobbyCallbacks.hpp"
#include "Fusion/Photon/Realtime/Async/PhotonMatchmakingCallbacks.hpp"
#ifdef __cpp_modules
                    export module Async;
                    #endif
                
