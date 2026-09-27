#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Meta/XR/MultiplayerBlocks/Colocation/AlignCameraToAnchor.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/Anchor.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/AnchorDebugVisual.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/AutomaticColocationLauncher.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/AutomaticColocationLauncher__ColocateByPlayerWithOculusIdInternal_d__20.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/AutomaticColocationLauncher__CreateNewColocatedSpace_d__23.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/AutomaticColocationLauncher__LocalizeAnchor_d__30.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/ColocationFailedReason.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/INetworkData.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/INetworkMessenger.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/LogLevel.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/Logger.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/NetworkAdapter.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/NetworkDataUtils.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/Player.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/ShareAndLocalizeParams.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/SharedAnchorManager.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/SharedAnchorManager__AnchorCreationTask_d__21.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/SharedAnchorManager__CheckIfRetrievingAnchorServiceHung_d__25.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/SharedAnchorManager__CheckIfSavingAnchorsServiceHung_d__22.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/SharedAnchorManager__CheckIfSharingAnchorServiceHung_d__28.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/SharedAnchorManager__CreateAlignmentAnchor_d__19.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/SharedAnchorManager__CreateAnchor_d__20.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/SharedAnchorManager__RetrieveAnchorsFromGroup_d__23.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/SharedAnchorManager__RetrieveAnchors_d__24.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/SharedAnchorManager__ShareAnchorsWithGroup_d__26.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/SharedAnchorManager__ShareAnchorsWithUser_d__27.hpp"
#ifdef __cpp_modules
                    export module Colocation;
                    #endif
                
