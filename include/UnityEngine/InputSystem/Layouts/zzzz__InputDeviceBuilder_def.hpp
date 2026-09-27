#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputDeviceBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_CacheRefInstance_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputDeviceBuilder)
namespace GlobalNamespace {
struct InputControlLayout_ControlItem;
}
namespace GlobalNamespace {
struct InputDeviceBuilder_RefInstance;
}
namespace GlobalNamespace {
struct InputDevice_ControlBitRangeNode;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceBuilder;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Layouts::InputDeviceBuilder);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Layouts::InputDeviceBuilder, "UnityEngine.InputSystem.Layouts", "InputDeviceBuilder");
// Dependencies UnityEngine.InputSystem.Layouts.InputControlLayout::CacheRefInstance
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Layouts.InputDeviceBuilder
struct CORDL_TYPE InputDeviceBuilder {
public:
// Declarations
using RefInstance = ::GlobalNamespace::InputDeviceBuilder_RefInstance;

/// @brief Field s_Instance, offset 0xffffffff, size 0x28 
 __declspec(property(get=getStaticF_s_Instance, put=setStaticF_s_Instance)) ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder  s_Instance;

/// @brief Field s_InstanceRef, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_InstanceRef, put=setStaticF_s_InstanceRef)) int32_t  s_InstanceRef;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method AddChildControl, addr 0xb00a5a0, size 0x77c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputControl* AddChildControl(::UnityEngine::InputSystem::Layouts::InputControlLayout*  layout, ::UnityEngine::InputSystem::Utilities::InternedString  variants, ::UnityEngine::InputSystem::InputControl*  parent, ::by_ref<bool>  haveChildrenUsingStateFromOtherControls, ::GlobalNamespace::InputControlLayout_ControlItem  controlItem, int32_t  childIndex, ::StringW  nameOverride) ;

/// @brief Method AddChildControlIfMissing, addr 0xb00ad1c, size 0xb0, virtual false, abstract: false, final false
inline void AddChildControlIfMissing(::UnityEngine::InputSystem::Layouts::InputControlLayout*  layout, ::UnityEngine::InputSystem::Utilities::InternedString  variants, ::UnityEngine::InputSystem::InputControl*  parent, ::by_ref<bool>  haveChildrenUsingStateFromOtherControls, ::by_ref<::GlobalNamespace::InputControlLayout_ControlItem>  controlItem) ;

/// @brief Method AddChildControls, addr 0xb009398, size 0x65c, virtual false, abstract: false, final false
inline void AddChildControls(::UnityEngine::InputSystem::Layouts::InputControlLayout*  layout, ::UnityEngine::InputSystem::Utilities::InternedString  variants, ::UnityEngine::InputSystem::InputControl*  parent, ::by_ref<bool>  haveChildrenUsingStateFromOtherControls) ;

/// @brief Method AddChildren, addr 0xb00c3ac, size 0x104, virtual false, abstract: false, final false
inline void AddChildren(::by_ref<::GlobalNamespace::InputDevice_ControlBitRangeNode>  parent, ::GlobalNamespace::InputDevice_ControlBitRangeNode  left, ::GlobalNamespace::InputDevice_ControlBitRangeNode  right) ;

/// @brief Method AddControlToNode, addr 0xb00c4b0, size 0x138, virtual false, abstract: false, final false
inline void AddControlToNode(::UnityEngine::InputSystem::InputControl*  control, ::by_ref<int32_t>  controlIndiciesNextFreeIndex, int32_t  nodeIndex) ;

/// @brief Method AddParentDisplayNameRecursive, addr 0xb00b6dc, size 0xb0, virtual false, abstract: false, final false
static inline void AddParentDisplayNameRecursive(::UnityEngine::InputSystem::InputControl*  control, ::System::Text::StringBuilder*  stringBuilder, bool  shortName) ;

/// @brief Method AddProcessors, addr 0xb00af0c, size 0x224, virtual false, abstract: false, final false
static inline void AddProcessors(::UnityEngine::InputSystem::InputControl*  control, ::by_ref<::GlobalNamespace::InputControlLayout_ControlItem>  controlItem, ::StringW  layoutName) ;

/// @brief Method ApplyUseStateFrom, addr 0xb00a240, size 0x1c8, virtual false, abstract: false, final false
static inline void ApplyUseStateFrom(::UnityEngine::InputSystem::InputControl*  parent, ::by_ref<::GlobalNamespace::InputControlLayout_ControlItem>  controlItem, ::UnityEngine::InputSystem::Layouts::InputControlLayout*  layout) ;

/// @brief Method ChildControlOverridePath, addr 0xb00adcc, size 0x90, virtual false, abstract: false, final false
inline ::StringW ChildControlOverridePath(::UnityEngine::InputSystem::InputControl*  parent, ::UnityEngine::InputSystem::Utilities::InternedString  controlName) ;

/// @brief Method ComputeStateLayout, addr 0xb0099f4, size 0x84c, virtual false, abstract: false, final false
static inline void ComputeStateLayout(::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method Dispose, addr 0xb008c80, size 0x8, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method FinalizeControlHierarchy, addr 0xb00875c, size 0x26c, virtual false, abstract: false, final false
inline void FinalizeControlHierarchy() ;

/// @brief Method FinalizeControlHierarchyRecursive, addr 0xb00b78c, size 0x42c, virtual false, abstract: false, final false
inline void FinalizeControlHierarchyRecursive(::UnityEngine::InputSystem::InputControl*  control, int32_t  controlIndex, ::ArrayW<::UnityEngine::InputSystem::InputControl*>  allControls, bool  noisy, bool  dontReset, ::by_ref<int32_t>  controlIndiciesNextFreeIndex) ;

/// @brief Method FindOrLoadLayout, addr 0xb008c88, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* FindOrLoadLayout(::StringW  name) ;

/// @brief Method Finish, addr 0xb0089c8, size 0x238, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputDevice* Finish() ;

/// @brief Method GetBestMidPoint, addr 0xb00befc, size 0x4b0, virtual false, abstract: false, final false
inline uint16_t GetBestMidPoint(::GlobalNamespace::InputDevice_ControlBitRangeNode  parent, uint16_t  startOffset) ;

/// @brief Method GetControlIndex, addr 0xb00c5e8, size 0xbc, virtual false, abstract: false, final false
inline uint16_t GetControlIndex(::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method InsertChildControl, addr 0xb00b130, size 0x310, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputControl* InsertChildControl(::UnityEngine::InputSystem::Layouts::InputControlLayout*  layout, ::UnityEngine::InputSystem::Utilities::InternedString  variant, ::UnityEngine::InputSystem::InputControl*  parent, ::by_ref<bool>  haveChildrenUsingStateFromOtherControls, ::by_ref<::GlobalNamespace::InputControlLayout_ControlItem>  controlItem) ;

/// @brief Method InsertChildControlOverride, addr 0xb00a408, size 0x198, virtual false, abstract: false, final false
inline void InsertChildControlOverride(::UnityEngine::InputSystem::InputControl*  parent, ::by_ref<::GlobalNamespace::InputControlLayout_ControlItem>  controlItem) ;

/// @brief Method InsertControlBitRangeNode, addr 0xb00bbb8, size 0x344, virtual false, abstract: false, final false
inline void InsertControlBitRangeNode(::by_ref<::GlobalNamespace::InputDevice_ControlBitRangeNode>  parent, ::UnityEngine::InputSystem::InputControl*  control, ::by_ref<int32_t>  controlIndiciesNextFreeIndex, uint16_t  startOffset) ;

/// @brief Method InstantiateLayout, addr 0xb008ce4, size 0x6b4, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputControl* InstantiateLayout(::UnityEngine::InputSystem::Layouts::InputControlLayout*  layout, ::UnityEngine::InputSystem::Utilities::InternedString  variants, ::UnityEngine::InputSystem::Utilities::InternedString  name, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method InstantiateLayout, addr 0xb0086f0, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputControl* InstantiateLayout(::UnityEngine::InputSystem::Utilities::InternedString  layout, ::UnityEngine::InputSystem::Utilities::InternedString  variants, ::UnityEngine::InputSystem::Utilities::InternedString  name, ::UnityEngine::InputSystem::InputControl*  parent) ;

/// @brief Method Ref, addr 0xb00c6e8, size 0x54, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputDeviceBuilder_RefInstance Ref() ;

/// @brief Method Reset, addr 0xb008c00, size 0x80, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetDisplayName, addr 0xb00b4a0, size 0x23c, virtual false, abstract: false, final false
inline void SetDisplayName(::UnityEngine::InputSystem::InputControl*  control, ::StringW  longDisplayNameFromLayout, ::StringW  shortDisplayNameFromLayout, bool  shortName) ;

/// @brief Method SetFormat, addr 0xb00ae5c, size 0xb0, virtual false, abstract: false, final false
static inline void SetFormat(::UnityEngine::InputSystem::InputControl*  control, ::GlobalNamespace::InputControlLayout_ControlItem  controlItem) ;

/// @brief Method Setup, addr 0xb008598, size 0x158, virtual false, abstract: false, final false
inline void Setup(::UnityEngine::InputSystem::Utilities::InternedString  layout, ::UnityEngine::InputSystem::Utilities::InternedString  variants, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription  deviceDescription) ;

/// @brief Method ShiftChildIndicesInHierarchyOneUp, addr 0xb00b440, size 0x60, virtual false, abstract: false, final false
static inline void ShiftChildIndicesInHierarchyOneUp(::UnityEngine::InputSystem::InputDevice*  device, int32_t  startIndex, ::UnityEngine::InputSystem::InputControl*  exceptControl) ;

static inline ::UnityEngine::InputSystem::Layouts::InputDeviceBuilder getStaticF_s_Instance() ;

static inline int32_t getStaticF_s_InstanceRef() ;

/// @brief Method get_instance, addr 0xb00c6a4, size 0x44, virtual false, abstract: false, final false
static inline ::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceBuilder> get_instance() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

static inline void setStaticF_s_Instance(::UnityEngine::InputSystem::Layouts::InputDeviceBuilder  value) ;

static inline void setStaticF_s_InstanceRef(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr InputDeviceBuilder() ;

// Ctor Parameters [CppParam { name: "m_Device", ty: "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_LayoutCacheRef", ty: "::GlobalNamespace::InputControlLayout_CacheRefInstance", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ChildControlOverrides", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::InputControlLayout_ControlItem>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_StateOffsetToControlMap", ty: "::System::Collections::Generic::List_1<uint32_t>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_StringBuilder", ty: "::System::Text::StringBuilder*", modifiers: "", def_value: None, comment: None }]
constexpr InputDeviceBuilder(::UnityEngine::InputSystem::InputDevice*  m_Device, ::GlobalNamespace::InputControlLayout_CacheRefInstance  m_LayoutCacheRef, ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::InputControlLayout_ControlItem>*  m_ChildControlOverrides, ::System::Collections::Generic::List_1<uint32_t>*  m_StateOffsetToControlMap, ::System::Text::StringBuilder*  m_StringBuilder) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13842};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field kSizeForControlUsingStateFromOtherControl offset 0xffffffff size 0x4
static constexpr uint32_t  kSizeForControlUsingStateFromOtherControl{static_cast<uint32_t>(0xffffffffu)};

/// @brief Field m_Device, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputDevice*  m_Device;

/// @brief Field m_LayoutCacheRef, offset: 0x8, size: 0x1, def value: None
 ::GlobalNamespace::InputControlLayout_CacheRefInstance  m_LayoutCacheRef;

/// @brief Field m_ChildControlOverrides, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::InputControlLayout_ControlItem>*  m_ChildControlOverrides;

/// @brief Field m_StateOffsetToControlMap, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<uint32_t>*  m_StateOffsetToControlMap;

/// @brief Field m_StringBuilder, offset: 0x20, size: 0x8, def value: None
 ::System::Text::StringBuilder*  m_StringBuilder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputDeviceBuilder, m_Device) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputDeviceBuilder, m_LayoutCacheRef) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputDeviceBuilder, m_ChildControlOverrides) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputDeviceBuilder, m_StateOffsetToControlMap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Layouts::InputDeviceBuilder, m_StringBuilder) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::Layouts::InputDeviceBuilder) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Layouts
