#pragma once
// IWYU pragma private; include "Meta/WitAi/ComponentExtensions_ComponentCopyData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ComponentExtensions_ComponentCopyData)
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
struct ComponentExtensions_ComponentCopyData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ComponentExtensions_ComponentCopyData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ComponentExtensions_ComponentCopyData, "Meta.WitAi", "ComponentExtensions/ComponentCopyData");
// Dependencies System.Reflection.FieldInfo, System.Reflection.PropertyInfo
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.WitAi.ComponentExtensions/ComponentCopyData
struct CORDL_TYPE ComponentExtensions_ComponentCopyData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ComponentExtensions_ComponentCopyData() ;

// Ctor Parameters [CppParam { name: "ComponentType", ty: "::System::Type*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Fields", ty: "::ArrayW<::System::Reflection::FieldInfo*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Properties", ty: "::ArrayW<::System::Reflection::PropertyInfo*>", modifiers: "", def_value: None, comment: None }]
constexpr ComponentExtensions_ComponentCopyData(::System::Type*  ComponentType, ::ArrayW<::System::Reflection::FieldInfo*>  Fields, ::ArrayW<::System::Reflection::PropertyInfo*>  Properties) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30979};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field ComponentType, offset: 0x0, size: 0x8, def value: None
 ::System::Type*  ComponentType;

/// @brief Field Fields, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::System::Reflection::FieldInfo*>  Fields;

/// @brief Field Properties, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::System::Reflection::PropertyInfo*>  Properties;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ComponentExtensions_ComponentCopyData, ComponentType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ComponentExtensions_ComponentCopyData, Fields) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ComponentExtensions_ComponentCopyData, Properties) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ComponentExtensions_ComponentCopyData) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
