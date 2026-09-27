#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "UnityEngine/Localization/Settings/AsynchronousBehaviour.hpp"
#include "UnityEngine/Localization/Settings/CommandLineLocaleSelector.hpp"
#include "UnityEngine/Localization/Settings/FallbackBehavior.hpp"
#include "UnityEngine/Localization/Settings/IInitialize.hpp"
#include "UnityEngine/Localization/Settings/ILocalesProvider.hpp"
#include "UnityEngine/Localization/Settings/IReset.hpp"
#include "UnityEngine/Localization/Settings/IStartupLocaleSelector.hpp"
#include "UnityEngine/Localization/Settings/ITablePostprocessor.hpp"
#include "UnityEngine/Localization/Settings/ITableProvider.hpp"
#include "UnityEngine/Localization/Settings/LocalesProvider.hpp"
#include "UnityEngine/Localization/Settings/LocalizationSettings.hpp"
#include "UnityEngine/Localization/Settings/LocalizedAssetDatabase.hpp"
#include "UnityEngine/Localization/Settings/LocalizedDatabase_2.hpp"
#include "UnityEngine/Localization/Settings/LocalizedDatabase`2_TableEntryResult.hpp"
#include "UnityEngine/Localization/Settings/LocalizedStringDatabase.hpp"
#include "UnityEngine/Localization/Settings/MissingTranslationBehavior.hpp"
#include "UnityEngine/Localization/Settings/PlayerPrefLocaleSelector.hpp"
#include "UnityEngine/Localization/Settings/PreloadBehavior.hpp"
#include "UnityEngine/Localization/Settings/SpecificLocaleSelector.hpp"
#include "UnityEngine/Localization/Settings/SystemLocaleSelector.hpp"
#ifdef __cpp_modules
                    export module Settings;
                    #endif
                
