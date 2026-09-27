#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalizationTelemetry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LocalizationTelemetry)
// Forward declare root types
namespace GlobalNamespace {
class LocalizationTelemetry;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LocalizationTelemetry*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalizationTelemetry*, "", "LocalizationTelemetry");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalizationTelemetry
class CORDL_TYPE LocalizationTelemetry : public ::System::Object {
public:
// Declarations
/// @brief Method get_GameVersionCustomTag, addr 0x5a676e4, size 0x78, virtual false, abstract: false, final false
static inline ::StringW get_GameVersionCustomTag() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizationTelemetry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizationTelemetry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizationTelemetry(LocalizationTelemetry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizationTelemetry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizationTelemetry(LocalizationTelemetry const& ) = delete;

/// @brief Field GAME_VERSION_CUSTOM_TAG_PREFIX offset 0xffffffff size 0x8
static constexpr ::ConstString  GAME_VERSION_CUSTOM_TAG_PREFIX{u"game_version_"};

/// @brief Field LANGUAGE_CHANGED_EVENT_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  LANGUAGE_CHANGED_EVENT_NAME{u"language_changed"};

/// @brief Field NEW_LANGUAGE_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  NEW_LANGUAGE_BODY_DATA{u"new_language"};

/// @brief Field STARTING_LANGUAGE_BODY_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  STARTING_LANGUAGE_BODY_DATA{u"starting_language"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3083};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::LocalizationTelemetry) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
