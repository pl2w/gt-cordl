#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_MeshCombinerSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MB3_MeshCombinerSettings)
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSettingsData;
}
namespace DigitalOpus::MB::Core {
class MB_IMeshBakerSettingsHolder;
}
namespace DigitalOpus::MB::Core {
class MB_IMeshBakerSettings;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB3_MeshCombinerSettings;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB3_MeshCombinerSettings*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB3_MeshCombinerSettings*, "DigitalOpus.MB.Core", "MB3_MeshCombinerSettings");
// [CreateAssetMenu(fileName = "MeshBakerSettings", menuName = "Mesh Baker/Mesh Baker Settings")]
// Dependencies UnityEngine.ScriptableObject
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB3_MeshCombinerSettings
class CORDL_TYPE MB3_MeshCombinerSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field data, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*  data;

/// @brief Convert operator to "::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder"
constexpr operator  ::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder*() noexcept;

/// @brief Method GetMeshBakerSettings, addr 0x9d866cc, size 0x8, virtual true, abstract: false, final true
inline ::DigitalOpus::MB::Core::MB_IMeshBakerSettings* GetMeshBakerSettings() ;

/// @brief Method GetMeshBakerSettingsAsSerializedProperty, addr 0x9d866d4, size 0x6c, virtual true, abstract: false, final true
inline void GetMeshBakerSettingsAsSerializedProperty(::by_ref<::StringW>  propertyName, ::by_ref<::UnityEngine::Object*>  targetObj) ;

static inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSettings* New_ctor() ;

constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData* const& __cordl_internal_get_data() const;

constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set_data(::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*  value) ;

/// @brief Method .ctor, addr 0x9d86740, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder"
constexpr ::DigitalOpus::MB::Core::MB_IMeshBakerSettingsHolder* i___DigitalOpus__MB__Core__MB_IMeshBakerSettingsHolder() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshCombinerSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MeshCombinerSettings(MB3_MeshCombinerSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshCombinerSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshCombinerSettings(MB3_MeshCombinerSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22626};

/// @brief Field data, offset: 0x18, size: 0x8, def value: None
 ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*  ___data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB3_MeshCombinerSettings, ___data) == 0x18, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB3_MeshCombinerSettings) == 0x20, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
