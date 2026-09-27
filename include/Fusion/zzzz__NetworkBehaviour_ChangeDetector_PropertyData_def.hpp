#pragma once
// IWYU pragma private; include "Fusion/NetworkBehaviour_ChangeDetector_PropertyData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(NetworkBehaviour_ChangeDetector_PropertyData)
namespace Fusion {
class ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper;
}
namespace Fusion {
class ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper;
}
namespace Fusion {
class NetworkedWeavedAttribute;
}
namespace System::Reflection {
class MemberInfo;
}
// Forward declare root types
namespace GlobalNamespace {
struct ChangeDetector_NetworkBehaviour_PropertyData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData, "Fusion", "NetworkBehaviour/ChangeDetector/PropertyData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.NetworkBehaviour/ChangeDetector/PropertyData
struct CORDL_TYPE ChangeDetector_NetworkBehaviour_PropertyData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ChangeDetector_NetworkBehaviour_PropertyData() ;

// Ctor Parameters [CppParam { name: "PropertyInfo", ty: "::System::Reflection::MemberInfo*", modifiers: "", def_value: None, comment: None }, CppParam { name: "WeavedAttribute", ty: "::Fusion::NetworkedWeavedAttribute*", modifiers: "", def_value: None, comment: None }, CppParam { name: "OnChanged", ty: "::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper*", modifiers: "", def_value: None, comment: None }, CppParam { name: "OnChangedPrev", ty: "::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper*", modifiers: "", def_value: None, comment: None }]
constexpr ChangeDetector_NetworkBehaviour_PropertyData(::System::Reflection::MemberInfo*  PropertyInfo, ::Fusion::NetworkedWeavedAttribute*  WeavedAttribute, ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper*  OnChanged, ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper*  OnChangedPrev) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18904};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field PropertyInfo, offset: 0x0, size: 0x8, def value: None
 ::System::Reflection::MemberInfo*  PropertyInfo;

/// @brief Field WeavedAttribute, offset: 0x8, size: 0x8, def value: None
 ::Fusion::NetworkedWeavedAttribute*  WeavedAttribute;

/// @brief Field OnChanged, offset: 0x10, size: 0x8, def value: None
 ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper*  OnChanged;

/// @brief Field OnChangedPrev, offset: 0x18, size: 0x8, def value: None
 ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper*  OnChangedPrev;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData, PropertyInfo) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData, WeavedAttribute) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData, OnChanged) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData, OnChangedPrev) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
