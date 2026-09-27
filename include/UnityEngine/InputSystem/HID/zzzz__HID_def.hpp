#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HID.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_HIDDeviceDescriptor_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HID)
namespace GlobalNamespace {
struct HID_Button;
}
namespace GlobalNamespace {
struct HID_GenericDesktop;
}
namespace GlobalNamespace {
struct HID_HIDCollectionDescriptor;
}
namespace GlobalNamespace {
struct HID_HIDCollectionType;
}
namespace GlobalNamespace {
struct HID_HIDDeviceDescriptorBuilder;
}
namespace GlobalNamespace {
struct HID_HIDDeviceDescriptor;
}
namespace GlobalNamespace {
struct HID_HIDElementDescriptor;
}
namespace GlobalNamespace {
struct HID_HIDElementFlags;
}
namespace GlobalNamespace {
struct HID_HIDReportType;
}
namespace GlobalNamespace {
struct HID_Simulation;
}
namespace GlobalNamespace {
struct HID_UsagePage;
}
namespace GlobalNamespace {
struct InputControlLayout_ControlItem;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem::HID {
class HIDLayoutBuilder_HID___c;
}
namespace UnityEngine::InputSystem::HID {
class HID_HIDLayoutBuilder;
}
namespace UnityEngine::InputSystem::HID {
class HID___c__DisplayClass13_0;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputDeviceExecuteCommandDelegate;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::HID {
class HID;
}
namespace UnityEngine::InputSystem::HID {
class HIDLayoutBuilder_HID___c;
}
namespace UnityEngine::InputSystem::HID {
class HID_HIDLayoutBuilder;
}
namespace UnityEngine::InputSystem::HID {
class HID___c__DisplayClass13_0;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::HID::HID*);
MARK_REF_T(::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c*);
MARK_REF_T(::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder*);
MARK_REF_T(::UnityEngine::InputSystem::HID::HID___c__DisplayClass13_0*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::HID::HID*, "UnityEngine.InputSystem.HID", "HID");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c*, "UnityEngine.InputSystem.HID", "HID/HIDLayoutBuilder/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder*, "UnityEngine.InputSystem.HID", "HID/HIDLayoutBuilder");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::HID::HID___c__DisplayClass13_0*, "UnityEngine.InputSystem.HID", "HID/<>c__DisplayClass13_0");
// Dependencies Unity.Profiling.ProfilerMarker, UnityEngine.InputSystem.HID.HID::HIDDeviceDescriptor, UnityEngine.InputSystem.InputDevice
namespace UnityEngine::InputSystem::HID {
// Is value type: false
// CS Name: UnityEngine.InputSystem.HID.HID
class CORDL_TYPE HID : public ::UnityEngine::InputSystem::InputDevice {
public:
// Declarations
using Button = ::GlobalNamespace::HID_Button;

using GenericDesktop = ::GlobalNamespace::HID_GenericDesktop;

using HIDCollectionDescriptor = ::GlobalNamespace::HID_HIDCollectionDescriptor;

using HIDCollectionType = ::GlobalNamespace::HID_HIDCollectionType;

using HIDDeviceDescriptor = ::GlobalNamespace::HID_HIDDeviceDescriptor;

using HIDDeviceDescriptorBuilder = ::GlobalNamespace::HID_HIDDeviceDescriptorBuilder;

using HIDElementDescriptor = ::GlobalNamespace::HID_HIDElementDescriptor;

using HIDElementFlags = ::GlobalNamespace::HID_HIDElementFlags;

using HIDReportType = ::GlobalNamespace::HID_HIDReportType;

using Simulation = ::GlobalNamespace::HID_Simulation;

using UsagePage = ::GlobalNamespace::HID_UsagePage;

using HIDLayoutBuilder = ::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder;

using __c__DisplayClass13_0 = ::UnityEngine::InputSystem::HID::HID___c__DisplayClass13_0;

 __declspec(property(get=get_hidDescriptor)) ::GlobalNamespace::HID_HIDDeviceDescriptor  hidDescriptor;

/// @brief Field k_HIDParseDescriptorFallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_HIDParseDescriptorFallback, put=setStaticF_k_HIDParseDescriptorFallback)) ::Unity::Profiling::ProfilerMarker  k_HIDParseDescriptorFallback;

/// @brief Field m_HIDDescriptor, offset 0x190, size 0x30 
 __declspec(property(get=__cordl_internal_get_m_HIDDescriptor, put=__cordl_internal_set_m_HIDDescriptor)) ::GlobalNamespace::HID_HIDDeviceDescriptor  m_HIDDescriptor;

/// @brief Field m_HaveParsedHIDDescriptor, offset 0x188, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HaveParsedHIDDescriptor, put=__cordl_internal_set_m_HaveParsedHIDDescriptor)) bool  m_HaveParsedHIDDescriptor;

static inline ::UnityEngine::InputSystem::HID::HID* New_ctor() ;

/// @brief Method OnFindLayoutForDevice, addr 0xafdecc4, size 0x90c, virtual false, abstract: false, final false
static inline ::StringW OnFindLayoutForDevice(::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>  description, ::StringW  matchedLayout, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*  executeDeviceCommand) ;

/// @brief Method ReadHIDDeviceDescriptor, addr 0xafdf5d0, size 0x7a4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::HID_HIDDeviceDescriptor ReadHIDDeviceDescriptor(::by_ref<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>  deviceDescription, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*  executeCommandDelegate) ;

/// @brief Method UsagePageToString, addr 0xafe0ca4, size 0x8c, virtual false, abstract: false, final false
static inline ::StringW UsagePageToString(::GlobalNamespace::HID_UsagePage  usagePage) ;

/// @brief Method UsageToString, addr 0xafe0d30, size 0x98, virtual false, abstract: false, final false
static inline ::StringW UsageToString(::GlobalNamespace::HID_UsagePage  usagePage, int32_t  usage) ;

constexpr ::GlobalNamespace::HID_HIDDeviceDescriptor const& __cordl_internal_get_m_HIDDescriptor() const;

constexpr ::GlobalNamespace::HID_HIDDeviceDescriptor& __cordl_internal_get_m_HIDDescriptor() ;

constexpr bool const& __cordl_internal_get_m_HaveParsedHIDDescriptor() const;

constexpr bool& __cordl_internal_get_m_HaveParsedHIDDescriptor() ;

constexpr void __cordl_internal_set_m_HIDDescriptor(::GlobalNamespace::HID_HIDDeviceDescriptor  value) ;

constexpr void __cordl_internal_set_m_HaveParsedHIDDescriptor(bool  value) ;

/// @brief Method .ctor, addr 0xafe0dc8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_HIDParseDescriptorFallback() ;

/// @brief Method get_QueryHIDParsedReportDescriptorDeviceCommandType, addr 0xafdebec, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Utilities::FourCC get_QueryHIDParsedReportDescriptorDeviceCommandType() ;

/// @brief Method get_QueryHIDReportDescriptorDeviceCommandType, addr 0xafdeb8c, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Utilities::FourCC get_QueryHIDReportDescriptorDeviceCommandType() ;

/// @brief Method get_QueryHIDReportDescriptorSizeDeviceCommandType, addr 0xafdebbc, size 0x30, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Utilities::FourCC get_QueryHIDReportDescriptorSizeDeviceCommandType() ;

/// @brief Method get_hidDescriptor, addr 0xafdec1c, size 0xa8, virtual false, abstract: false, final false
inline ::GlobalNamespace::HID_HIDDeviceDescriptor get_hidDescriptor() ;

static inline void setStaticF_k_HIDParseDescriptorFallback(::Unity::Profiling::ProfilerMarker  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HID() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HID", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HID(HID && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HID", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HID(HID const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13627};

/// @brief Field kHIDInterface offset 0xffffffff size 0x8
static constexpr ::ConstString  kHIDInterface{u"HID"};

/// @brief Field kHIDNamespace offset 0xffffffff size 0x8
static constexpr ::ConstString  kHIDNamespace{u"HID"};

/// @brief Field m_HaveParsedHIDDescriptor, offset: 0x188, size: 0x1, def value: None
 bool  ___m_HaveParsedHIDDescriptor;

/// @brief Field m_HIDDescriptor, offset: 0x190, size: 0x30, def value: None
 ::GlobalNamespace::HID_HIDDeviceDescriptor  ___m_HIDDescriptor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::HID::HID, ___m_HaveParsedHIDDescriptor) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID, ___m_HIDDescriptor) == 0x190, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::HID::HID) == 0x1c0, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::HID
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::InputSystem::HID {
// Is value type: false
// CS Name: UnityEngine.InputSystem.HID.HID/<>c__DisplayClass13_0
class CORDL_TYPE HID___c__DisplayClass13_0 : public ::System::Object {
public:
// Declarations
/// @brief Field layout, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_layout, put=__cordl_internal_set_layout)) ::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder*  layout;

static inline ::UnityEngine::InputSystem::HID::HID___c__DisplayClass13_0* New_ctor() ;

/// @brief Method <OnFindLayoutForDevice>b__0, addr 0xafe3750, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* _OnFindLayoutForDevice_b__0() ;

constexpr ::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder* const& __cordl_internal_get_layout() const;

constexpr ::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder*& __cordl_internal_get_layout() ;

constexpr void __cordl_internal_set_layout(::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder*  value) ;

/// @brief Method .ctor, addr 0xafe3748, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HID___c__DisplayClass13_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HID___c__DisplayClass13_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HID___c__DisplayClass13_0(HID___c__DisplayClass13_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HID___c__DisplayClass13_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HID___c__DisplayClass13_0(HID___c__DisplayClass13_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13626};

/// @brief Field layout, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder*  ___layout;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::HID::HID___c__DisplayClass13_0, ___layout) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::HID::HID___c__DisplayClass13_0) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::HID
// Dependencies System.Object, UnityEngine.InputSystem.HID.HID::HIDDeviceDescriptor
namespace UnityEngine::InputSystem::HID {
// Is value type: false
// CS Name: UnityEngine.InputSystem.HID.HID/HIDLayoutBuilder
class CORDL_TYPE HID_HIDLayoutBuilder : public ::System::Object {
public:
// Declarations
using __c = ::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c;

/// @brief Field deviceType, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_deviceType, put=__cordl_internal_set_deviceType)) ::System::Type*  deviceType;

/// @brief Field displayName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayName, put=__cordl_internal_set_displayName)) ::StringW  displayName;

/// @brief Field hidDescriptor, offset 0x18, size 0x30 
 __declspec(property(get=__cordl_internal_get_hidDescriptor, put=__cordl_internal_set_hidDescriptor)) ::GlobalNamespace::HID_HIDDeviceDescriptor  hidDescriptor;

/// @brief Field parentLayout, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentLayout, put=__cordl_internal_set_parentLayout)) ::StringW  parentLayout;

/// @brief Method Build, addr 0xafe0e44, size 0xc78, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* Build() ;

static inline ::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder* New_ctor() ;

constexpr ::System::Type* const& __cordl_internal_get_deviceType() const;

constexpr ::System::Type*& __cordl_internal_get_deviceType() ;

constexpr ::StringW const& __cordl_internal_get_displayName() const;

constexpr ::StringW& __cordl_internal_get_displayName() ;

constexpr ::GlobalNamespace::HID_HIDDeviceDescriptor const& __cordl_internal_get_hidDescriptor() const;

constexpr ::GlobalNamespace::HID_HIDDeviceDescriptor& __cordl_internal_get_hidDescriptor() ;

constexpr ::StringW const& __cordl_internal_get_parentLayout() const;

constexpr ::StringW& __cordl_internal_get_parentLayout() ;

constexpr void __cordl_internal_set_deviceType(::System::Type*  value) ;

constexpr void __cordl_internal_set_displayName(::StringW  value) ;

constexpr void __cordl_internal_set_hidDescriptor(::GlobalNamespace::HID_HIDDeviceDescriptor  value) ;

constexpr void __cordl_internal_set_parentLayout(::StringW  value) ;

/// @brief Method .ctor, addr 0xafdfdac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HID_HIDLayoutBuilder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HID_HIDLayoutBuilder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HID_HIDLayoutBuilder(HID_HIDLayoutBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HID_HIDLayoutBuilder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HID_HIDLayoutBuilder(HID_HIDLayoutBuilder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13614};

/// @brief Field displayName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___displayName;

/// @brief Field hidDescriptor, offset: 0x18, size: 0x30, def value: None
 ::GlobalNamespace::HID_HIDDeviceDescriptor  ___hidDescriptor;

/// @brief Field parentLayout, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___parentLayout;

/// @brief Field deviceType, offset: 0x50, size: 0x8, def value: None
 ::System::Type*  ___deviceType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder, ___displayName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder, ___hidDescriptor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder, ___parentLayout) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder, ___deviceType) == 0x50, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder) == 0x58, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::HID
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::InputSystem::HID {
// Is value type: false
// CS Name: UnityEngine.InputSystem.HID.HID/HIDLayoutBuilder/<>c
class CORDL_TYPE HIDLayoutBuilder_HID___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c*  __9;

/// @brief Field <>9__4_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_0, put=setStaticF___9__4_0)) ::System::Predicate_1<::GlobalNamespace::HID_HIDElementDescriptor>*  __9__4_0;

/// @brief Field <>9__4_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_1, put=setStaticF___9__4_1)) ::System::Predicate_1<::GlobalNamespace::HID_HIDElementDescriptor>*  __9__4_1;

/// @brief Field <>9__4_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_2, put=setStaticF___9__4_2)) ::System::Func_2<::GlobalNamespace::InputControlLayout_ControlItem,::StringW>*  __9__4_2;

static inline ::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c* New_ctor() ;

/// @brief Method <Build>b__4_0, addr 0xafe2b9c, size 0x24, virtual false, abstract: false, final false
inline bool _Build_b__4_0(::GlobalNamespace::HID_HIDElementDescriptor  element) ;

/// @brief Method <Build>b__4_1, addr 0xafe2bc0, size 0x24, virtual false, abstract: false, final false
inline bool _Build_b__4_1(::GlobalNamespace::HID_HIDElementDescriptor  element) ;

/// @brief Method <Build>b__4_2, addr 0xafe2be4, size 0xc, virtual false, abstract: false, final false
inline ::StringW _Build_b__4_2(::GlobalNamespace::InputControlLayout_ControlItem  x) ;

/// @brief Method .ctor, addr 0xafe2b94, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c* getStaticF___9() ;

static inline ::System::Predicate_1<::GlobalNamespace::HID_HIDElementDescriptor>* getStaticF___9__4_0() ;

static inline ::System::Predicate_1<::GlobalNamespace::HID_HIDElementDescriptor>* getStaticF___9__4_1() ;

static inline ::System::Func_2<::GlobalNamespace::InputControlLayout_ControlItem,::StringW>* getStaticF___9__4_2() ;

static inline void setStaticF___9(::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c*  value) ;

static inline void setStaticF___9__4_0(::System::Predicate_1<::GlobalNamespace::HID_HIDElementDescriptor>*  value) ;

static inline void setStaticF___9__4_1(::System::Predicate_1<::GlobalNamespace::HID_HIDElementDescriptor>*  value) ;

static inline void setStaticF___9__4_2(::System::Func_2<::GlobalNamespace::InputControlLayout_ControlItem,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HIDLayoutBuilder_HID___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HIDLayoutBuilder_HID___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HIDLayoutBuilder_HID___c(HIDLayoutBuilder_HID___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HIDLayoutBuilder_HID___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HIDLayoutBuilder_HID___c(HIDLayoutBuilder_HID___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13613};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::HID
