#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "Meta/WitAi/TTS/LipSync/BaseTextureFlipLipSync.hpp"
#include "Meta/WitAi/TTS/LipSync/BaseTextureFlipLipSync_VisemeTextureData.hpp"
#include "Meta/WitAi/TTS/LipSync/BaseVisemeBlendShapeLipSync.hpp"
#include "Meta/WitAi/TTS/LipSync/BaseVisemeBlendShapeLipSync_VisemeBlendShapeData.hpp"
#include "Meta/WitAi/TTS/LipSync/BaseVisemeBlendShapeLipSync_VisemeBlendShapeWeight.hpp"
#include "Meta/WitAi/TTS/LipSync/VisemeBlendShapeLipSync.hpp"
#include "Meta/WitAi/TTS/LipSync/VisemeChangedEvent.hpp"
#include "Meta/WitAi/TTS/LipSync/VisemeLerpEvent.hpp"
#include "Meta/WitAi/TTS/LipSync/VisemeLipSyncAnimator.hpp"
#include "Meta/WitAi/TTS/LipSync/VisemeTextureFlipLipSync.hpp"
#ifdef __cpp_modules
                    export module LipSync;
                    #endif
                
