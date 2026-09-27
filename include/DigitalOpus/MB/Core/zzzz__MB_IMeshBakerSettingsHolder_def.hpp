#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB_IMeshBakerSettingsHolder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MB_IMeshBakerSettingsHolder)
namespace DigitalOpus::MB::Core {
class MB_IMeshBakerSettings;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB_IMeshBakerSettingsHolder;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder*, "DigitalOpus.MB.Core", "MB_IMeshBakerSettingsHolder");
// Dependencies 
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB_IMeshBakerSettingsHolder
class CORDL_TYPE MB_IMeshBakerSettingsHolder {
public:
// Declarations
/// @brief Method GetMeshBakerSettings, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::DigitalOpus::MB::Core::MB_IMeshBakerSettings* GetMeshBakerSettings() ;

/// @brief Method GetMeshBakerSettingsAsSerializedProperty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GetMeshBakerSettingsAsSerializedProperty(::by_ref<::StringW>  propertyName, ::by_ref<::UnityEngine::Object*>  targetObj) ;

// Ctor Parameters [CppParam { name: "", ty: "MB_IMeshBakerSettingsHolder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_IMeshBakerSettingsHolder(MB_IMeshBakerSettingsHolder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22741};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def DigitalOpus::MB::Core
