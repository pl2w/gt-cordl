#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionState_BindingState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionState_BindingState)
namespace GlobalNamespace {
struct BindingState_InputActionState_Flags;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputActionState_BindingState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputActionState_BindingState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputActionState_BindingState, "UnityEngine.InputSystem", "InputActionState/BindingState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionState/BindingState
#pragma pack(push, 0)
struct CORDL_TYPE InputActionState_BindingState {
public:
// Declarations
using Flags = ::GlobalNamespace::BindingState_InputActionState_Flags;

/// @brief Field __padding, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get___padding, put=__cordl_internal_set___padding)) int32_t  __padding;

 __declspec(property(get=get_actionIndex, put=set_actionIndex)) int32_t  actionIndex;

 __declspec(property(get=get_chainsWithNext, put=set_chainsWithNext)) bool  chainsWithNext;

 __declspec(property(get=get_compositeOrCompositeBindingIndex, put=set_compositeOrCompositeBindingIndex)) int32_t  compositeOrCompositeBindingIndex;

 __declspec(property(get=get_controlCount, put=set_controlCount)) int32_t  controlCount;

 __declspec(property(get=get_controlStartIndex, put=set_controlStartIndex)) int32_t  controlStartIndex;

 __declspec(property(get=get_flags, put=set_flags)) ::GlobalNamespace::BindingState_InputActionState_Flags  flags;

 __declspec(property(get=get_initialStateCheckPending, put=set_initialStateCheckPending)) bool  initialStateCheckPending;

 __declspec(property(get=get_interactionCount, put=set_interactionCount)) int32_t  interactionCount;

 __declspec(property(get=get_interactionStartIndex, put=set_interactionStartIndex)) int32_t  interactionStartIndex;

 __declspec(property(get=get_isComposite, put=set_isComposite)) bool  isComposite;

 __declspec(property(get=get_isEndOfChain, put=set_isEndOfChain)) bool  isEndOfChain;

 __declspec(property(get=get_isPartOfChain)) bool  isPartOfChain;

 __declspec(property(get=get_isPartOfComposite, put=set_isPartOfComposite)) bool  isPartOfComposite;

/// @brief Field m_ActionIndex, offset 0x6, size 0x2 
 __declspec(property(get=__cordl_internal_get_m_ActionIndex, put=__cordl_internal_set_m_ActionIndex)) uint16_t  m_ActionIndex;

/// @brief Field m_CompositeOrCompositeBindingIndex, offset 0x8, size 0x2 
 __declspec(property(get=__cordl_internal_get_m_CompositeOrCompositeBindingIndex, put=__cordl_internal_set_m_CompositeOrCompositeBindingIndex)) uint16_t  m_CompositeOrCompositeBindingIndex;

/// @brief Field m_ControlCount, offset 0x0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ControlCount, put=__cordl_internal_set_m_ControlCount)) uint8_t  m_ControlCount;

/// @brief Field m_ControlStartIndex, offset 0xe, size 0x2 
 __declspec(property(get=__cordl_internal_get_m_ControlStartIndex, put=__cordl_internal_set_m_ControlStartIndex)) uint16_t  m_ControlStartIndex;

/// @brief Field m_Flags, offset 0x4, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Flags, put=__cordl_internal_set_m_Flags)) uint8_t  m_Flags;

/// @brief Field m_InteractionCount, offset 0x1, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_InteractionCount, put=__cordl_internal_set_m_InteractionCount)) uint8_t  m_InteractionCount;

/// @brief Field m_InteractionStartIndex, offset 0xc, size 0x2 
 __declspec(property(get=__cordl_internal_get_m_InteractionStartIndex, put=__cordl_internal_set_m_InteractionStartIndex)) uint16_t  m_InteractionStartIndex;

/// @brief Field m_MapIndex, offset 0x3, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_MapIndex, put=__cordl_internal_set_m_MapIndex)) uint8_t  m_MapIndex;

/// @brief Field m_PartIndex, offset 0x5, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PartIndex, put=__cordl_internal_set_m_PartIndex)) uint8_t  m_PartIndex;

/// @brief Field m_PressTime, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PressTime, put=__cordl_internal_set_m_PressTime)) double_t  m_PressTime;

/// @brief Field m_ProcessorCount, offset 0x2, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ProcessorCount, put=__cordl_internal_set_m_ProcessorCount)) uint8_t  m_ProcessorCount;

/// @brief Field m_ProcessorStartIndex, offset 0xa, size 0x2 
 __declspec(property(get=__cordl_internal_get_m_ProcessorStartIndex, put=__cordl_internal_set_m_ProcessorStartIndex)) uint16_t  m_ProcessorStartIndex;

/// @brief Field m_TriggerEventIdForComposite, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TriggerEventIdForComposite, put=__cordl_internal_set_m_TriggerEventIdForComposite)) int32_t  m_TriggerEventIdForComposite;

 __declspec(property(get=get_mapIndex, put=set_mapIndex)) int32_t  mapIndex;

 __declspec(property(get=get_partIndex, put=set_partIndex)) int32_t  partIndex;

 __declspec(property(get=get_pressTime, put=set_pressTime)) double_t  pressTime;

 __declspec(property(get=get_processorCount, put=set_processorCount)) int32_t  processorCount;

 __declspec(property(get=get_processorStartIndex, put=set_processorStartIndex)) int32_t  processorStartIndex;

 __declspec(property(get=get_triggerEventIdForComposite, put=set_triggerEventIdForComposite)) int32_t  triggerEventIdForComposite;

 __declspec(property(get=get_wantsInitialStateCheck, put=set_wantsInitialStateCheck)) bool  wantsInitialStateCheck;

constexpr int32_t const& __cordl_internal_get___padding() const;

constexpr int32_t& __cordl_internal_get___padding() ;

constexpr uint16_t const& __cordl_internal_get_m_ActionIndex() const;

constexpr uint16_t& __cordl_internal_get_m_ActionIndex() ;

constexpr uint16_t const& __cordl_internal_get_m_CompositeOrCompositeBindingIndex() const;

constexpr uint16_t& __cordl_internal_get_m_CompositeOrCompositeBindingIndex() ;

constexpr uint8_t const& __cordl_internal_get_m_ControlCount() const;

constexpr uint8_t& __cordl_internal_get_m_ControlCount() ;

constexpr uint16_t const& __cordl_internal_get_m_ControlStartIndex() const;

constexpr uint16_t& __cordl_internal_get_m_ControlStartIndex() ;

constexpr uint8_t const& __cordl_internal_get_m_Flags() const;

constexpr uint8_t& __cordl_internal_get_m_Flags() ;

constexpr uint8_t const& __cordl_internal_get_m_InteractionCount() const;

constexpr uint8_t& __cordl_internal_get_m_InteractionCount() ;

constexpr uint16_t const& __cordl_internal_get_m_InteractionStartIndex() const;

constexpr uint16_t& __cordl_internal_get_m_InteractionStartIndex() ;

constexpr uint8_t const& __cordl_internal_get_m_MapIndex() const;

constexpr uint8_t& __cordl_internal_get_m_MapIndex() ;

constexpr uint8_t const& __cordl_internal_get_m_PartIndex() const;

constexpr uint8_t& __cordl_internal_get_m_PartIndex() ;

constexpr double_t const& __cordl_internal_get_m_PressTime() const;

constexpr double_t& __cordl_internal_get_m_PressTime() ;

constexpr uint8_t const& __cordl_internal_get_m_ProcessorCount() const;

constexpr uint8_t& __cordl_internal_get_m_ProcessorCount() ;

constexpr uint16_t const& __cordl_internal_get_m_ProcessorStartIndex() const;

constexpr uint16_t& __cordl_internal_get_m_ProcessorStartIndex() ;

constexpr int32_t const& __cordl_internal_get_m_TriggerEventIdForComposite() const;

constexpr int32_t& __cordl_internal_get_m_TriggerEventIdForComposite() ;

constexpr void __cordl_internal_set___padding(int32_t  value) ;

constexpr void __cordl_internal_set_m_ActionIndex(uint16_t  value) ;

constexpr void __cordl_internal_set_m_CompositeOrCompositeBindingIndex(uint16_t  value) ;

constexpr void __cordl_internal_set_m_ControlCount(uint8_t  value) ;

constexpr void __cordl_internal_set_m_ControlStartIndex(uint16_t  value) ;

constexpr void __cordl_internal_set_m_Flags(uint8_t  value) ;

constexpr void __cordl_internal_set_m_InteractionCount(uint8_t  value) ;

constexpr void __cordl_internal_set_m_InteractionStartIndex(uint16_t  value) ;

constexpr void __cordl_internal_set_m_MapIndex(uint8_t  value) ;

constexpr void __cordl_internal_set_m_PartIndex(uint8_t  value) ;

constexpr void __cordl_internal_set_m_PressTime(double_t  value) ;

constexpr void __cordl_internal_set_m_ProcessorCount(uint8_t  value) ;

constexpr void __cordl_internal_set_m_ProcessorStartIndex(uint16_t  value) ;

constexpr void __cordl_internal_set_m_TriggerEventIdForComposite(int32_t  value) ;

/// @brief Method get_actionIndex, addr 0xaf2a980, size 0x14, virtual false, abstract: false, final false
inline int32_t get_actionIndex() ;

/// @brief Method get_chainsWithNext, addr 0xaf30360, size 0xc, virtual false, abstract: false, final false
inline bool get_chainsWithNext() ;

/// @brief Method get_compositeOrCompositeBindingIndex, addr 0xaf289c4, size 0x14, virtual false, abstract: false, final false
inline int32_t get_compositeOrCompositeBindingIndex() ;

/// @brief Method get_controlCount, addr 0xaf2fe60, size 0x8, virtual false, abstract: false, final false
inline int32_t get_controlCount() ;

/// @brief Method get_controlStartIndex, addr 0xaf2fdc8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_controlStartIndex() ;

/// @brief Method get_flags, addr 0xaf30350, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::BindingState_InputActionState_Flags get_flags() ;

/// @brief Method get_initialStateCheckPending, addr 0xaf2bfa8, size 0xc, virtual false, abstract: false, final false
inline bool get_initialStateCheckPending() ;

/// @brief Method get_interactionCount, addr 0xaf2ff94, size 0x8, virtual false, abstract: false, final false
inline int32_t get_interactionCount() ;

/// @brief Method get_interactionStartIndex, addr 0xaf29d34, size 0x14, virtual false, abstract: false, final false
inline int32_t get_interactionStartIndex() ;

/// @brief Method get_isComposite, addr 0xaf296b4, size 0xc, virtual false, abstract: false, final false
inline bool get_isComposite() ;

/// @brief Method get_isEndOfChain, addr 0xaf30380, size 0xc, virtual false, abstract: false, final false
inline bool get_isEndOfChain() ;

/// @brief Method get_isPartOfChain, addr 0xaf303ac, size 0x10, virtual false, abstract: false, final false
inline bool get_isPartOfChain() ;

/// @brief Method get_isPartOfComposite, addr 0xaf289b8, size 0xc, virtual false, abstract: false, final false
inline bool get_isPartOfComposite() ;

/// @brief Method get_mapIndex, addr 0xaf301fc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_mapIndex() ;

/// @brief Method get_partIndex, addr 0xaf3041c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_partIndex() ;

/// @brief Method get_pressTime, addr 0xaf30340, size 0x8, virtual false, abstract: false, final false
inline double_t get_pressTime() ;

/// @brief Method get_processorCount, addr 0xaf300c8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_processorCount() ;

/// @brief Method get_processorStartIndex, addr 0xaf2e6e0, size 0x14, virtual false, abstract: false, final false
inline int32_t get_processorStartIndex() ;

/// @brief Method get_triggerEventIdForComposite, addr 0xaf30330, size 0x8, virtual false, abstract: false, final false
inline int32_t get_triggerEventIdForComposite() ;

/// @brief Method get_wantsInitialStateCheck, addr 0xaf2a9a4, size 0xc, virtual false, abstract: false, final false
inline bool get_wantsInitialStateCheck() ;

/// @brief Method set_actionIndex, addr 0xaf30160, size 0x9c, virtual false, abstract: false, final false
inline void set_actionIndex(int32_t  value) ;

/// @brief Method set_chainsWithNext, addr 0xaf3036c, size 0x14, virtual false, abstract: false, final false
inline void set_chainsWithNext(bool  value) ;

/// @brief Method set_compositeOrCompositeBindingIndex, addr 0xaf30294, size 0x9c, virtual false, abstract: false, final false
inline void set_compositeOrCompositeBindingIndex(int32_t  value) ;

/// @brief Method set_controlCount, addr 0xaf2fe68, size 0x90, virtual false, abstract: false, final false
inline void set_controlCount(int32_t  value) ;

/// @brief Method set_controlStartIndex, addr 0xaf2fdd0, size 0x90, virtual false, abstract: false, final false
inline void set_controlStartIndex(int32_t  value) ;

/// @brief Method set_flags, addr 0xaf30358, size 0x8, virtual false, abstract: false, final false
inline void set_flags(::GlobalNamespace::BindingState_InputActionState_Flags  value) ;

/// @brief Method set_initialStateCheckPending, addr 0xaf2a9b0, size 0x20, virtual false, abstract: false, final false
inline void set_initialStateCheckPending(bool  value) ;

/// @brief Method set_interactionCount, addr 0xaf2ff9c, size 0x90, virtual false, abstract: false, final false
inline void set_interactionCount(int32_t  value) ;

/// @brief Method set_interactionStartIndex, addr 0xaf2fef8, size 0x9c, virtual false, abstract: false, final false
inline void set_interactionStartIndex(int32_t  value) ;

/// @brief Method set_isComposite, addr 0xaf303bc, size 0x20, virtual false, abstract: false, final false
inline void set_isComposite(bool  value) ;

/// @brief Method set_isEndOfChain, addr 0xaf3038c, size 0x20, virtual false, abstract: false, final false
inline void set_isEndOfChain(bool  value) ;

/// @brief Method set_isPartOfComposite, addr 0xaf303dc, size 0x20, virtual false, abstract: false, final false
inline void set_isPartOfComposite(bool  value) ;

/// @brief Method set_mapIndex, addr 0xaf30204, size 0x90, virtual false, abstract: false, final false
inline void set_mapIndex(int32_t  value) ;

/// @brief Method set_partIndex, addr 0xaf30424, size 0x8, virtual false, abstract: false, final false
inline void set_partIndex(int32_t  value) ;

/// @brief Method set_pressTime, addr 0xaf30348, size 0x8, virtual false, abstract: false, final false
inline void set_pressTime(double_t  value) ;

/// @brief Method set_processorCount, addr 0xaf300d0, size 0x90, virtual false, abstract: false, final false
inline void set_processorCount(int32_t  value) ;

/// @brief Method set_processorStartIndex, addr 0xaf3002c, size 0x9c, virtual false, abstract: false, final false
inline void set_processorStartIndex(int32_t  value) ;

/// @brief Method set_triggerEventIdForComposite, addr 0xaf30338, size 0x8, virtual false, abstract: false, final false
inline void set_triggerEventIdForComposite(int32_t  value) ;

/// @brief Method set_wantsInitialStateCheck, addr 0xaf303fc, size 0x20, virtual false, abstract: false, final false
inline void set_wantsInitialStateCheck(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr InputActionState_BindingState() ;

// Ctor Parameters [CppParam { name: "m_ControlCount", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_InteractionCount", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ProcessorCount", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_MapIndex", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Flags", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_PartIndex", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ActionIndex", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CompositeOrCompositeBindingIndex", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ProcessorStartIndex", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_InteractionStartIndex", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ControlStartIndex", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_PressTime", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TriggerEventIdForComposite", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__padding", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputActionState_BindingState(uint8_t  m_ControlCount, uint8_t  m_InteractionCount, uint8_t  m_ProcessorCount, uint8_t  m_MapIndex, uint8_t  m_Flags, uint8_t  m_PartIndex, uint16_t  m_ActionIndex, uint16_t  m_CompositeOrCompositeBindingIndex, uint16_t  m_ProcessorStartIndex, uint16_t  m_InteractionStartIndex, uint16_t  m_ControlStartIndex, double_t  m_PressTime, int32_t  m_TriggerEventIdForComposite, int32_t  __padding) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m_ControlCount_padding[0x0];
/// @brief Field m_ControlCount, offset: 0x0, size: 0x1, def value: None
 uint8_t  ___m_ControlCount;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m_ControlCount_padding_forAlignment[0x0];
/// @brief Field m_ControlCount, offset: 0x0, size: 0x1, def value: None
 uint8_t  ___m_ControlCount_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x1
 uint8_t  ___m_InteractionCount_padding[0x1];
/// @brief Field m_InteractionCount, offset: 0x1, size: 0x1, def value: None
 uint8_t  ___m_InteractionCount;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x1 for alignment
 uint8_t  ___m_InteractionCount_padding_forAlignment[0x1];
/// @brief Field m_InteractionCount, offset: 0x1, size: 0x1, def value: None
 uint8_t  ___m_InteractionCount_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x2
 uint8_t  ___m_ProcessorCount_padding[0x2];
/// @brief Field m_ProcessorCount, offset: 0x2, size: 0x1, def value: None
 uint8_t  ___m_ProcessorCount;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x2 for alignment
 uint8_t  ___m_ProcessorCount_padding_forAlignment[0x2];
/// @brief Field m_ProcessorCount, offset: 0x2, size: 0x1, def value: None
 uint8_t  ___m_ProcessorCount_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x3
 uint8_t  ___m_MapIndex_padding[0x3];
/// @brief Field m_MapIndex, offset: 0x3, size: 0x1, def value: None
 uint8_t  ___m_MapIndex;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x3 for alignment
 uint8_t  ___m_MapIndex_padding_forAlignment[0x3];
/// @brief Field m_MapIndex, offset: 0x3, size: 0x1, def value: None
 uint8_t  ___m_MapIndex_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___m_Flags_padding[0x4];
/// @brief Field m_Flags, offset: 0x4, size: 0x1, def value: None
 uint8_t  ___m_Flags;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___m_Flags_padding_forAlignment[0x4];
/// @brief Field m_Flags, offset: 0x4, size: 0x1, def value: None
 uint8_t  ___m_Flags_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x5
 uint8_t  ___m_PartIndex_padding[0x5];
/// @brief Field m_PartIndex, offset: 0x5, size: 0x1, def value: None
 uint8_t  ___m_PartIndex;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x5 for alignment
 uint8_t  ___m_PartIndex_padding_forAlignment[0x5];
/// @brief Field m_PartIndex, offset: 0x5, size: 0x1, def value: None
 uint8_t  ___m_PartIndex_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x6
 uint8_t  ___m_ActionIndex_padding[0x6];
/// @brief Field m_ActionIndex, offset: 0x6, size: 0x2, def value: None
 uint16_t  ___m_ActionIndex;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x6 for alignment
 uint8_t  ___m_ActionIndex_padding_forAlignment[0x6];
/// @brief Field m_ActionIndex, offset: 0x6, size: 0x2, def value: None
 uint16_t  ___m_ActionIndex_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___m_CompositeOrCompositeBindingIndex_padding[0x8];
/// @brief Field m_CompositeOrCompositeBindingIndex, offset: 0x8, size: 0x2, def value: None
 uint16_t  ___m_CompositeOrCompositeBindingIndex;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___m_CompositeOrCompositeBindingIndex_padding_forAlignment[0x8];
/// @brief Field m_CompositeOrCompositeBindingIndex, offset: 0x8, size: 0x2, def value: None
 uint16_t  ___m_CompositeOrCompositeBindingIndex_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xa
 uint8_t  ___m_ProcessorStartIndex_padding[0xa];
/// @brief Field m_ProcessorStartIndex, offset: 0xa, size: 0x2, def value: None
 uint16_t  ___m_ProcessorStartIndex;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xa for alignment
 uint8_t  ___m_ProcessorStartIndex_padding_forAlignment[0xa];
/// @brief Field m_ProcessorStartIndex, offset: 0xa, size: 0x2, def value: None
 uint16_t  ___m_ProcessorStartIndex_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xc
 uint8_t  ___m_InteractionStartIndex_padding[0xc];
/// @brief Field m_InteractionStartIndex, offset: 0xc, size: 0x2, def value: None
 uint16_t  ___m_InteractionStartIndex;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xc for alignment
 uint8_t  ___m_InteractionStartIndex_padding_forAlignment[0xc];
/// @brief Field m_InteractionStartIndex, offset: 0xc, size: 0x2, def value: None
 uint16_t  ___m_InteractionStartIndex_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0xe
 uint8_t  ___m_ControlStartIndex_padding[0xe];
/// @brief Field m_ControlStartIndex, offset: 0xe, size: 0x2, def value: None
 uint16_t  ___m_ControlStartIndex;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0xe for alignment
 uint8_t  ___m_ControlStartIndex_padding_forAlignment[0xe];
/// @brief Field m_ControlStartIndex, offset: 0xe, size: 0x2, def value: None
 uint16_t  ___m_ControlStartIndex_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ___m_PressTime_padding[0x10];
/// @brief Field m_PressTime, offset: 0x10, size: 0x8, def value: None
 double_t  ___m_PressTime;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ___m_PressTime_padding_forAlignment[0x10];
/// @brief Field m_PressTime, offset: 0x10, size: 0x8, def value: None
 double_t  ___m_PressTime_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x18
 uint8_t  ___m_TriggerEventIdForComposite_padding[0x18];
/// @brief Field m_TriggerEventIdForComposite, offset: 0x18, size: 0x4, def value: None
 int32_t  ___m_TriggerEventIdForComposite;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x18 for alignment
 uint8_t  ___m_TriggerEventIdForComposite_padding_forAlignment[0x18];
/// @brief Field m_TriggerEventIdForComposite, offset: 0x18, size: 0x4, def value: None
 int32_t  ___m_TriggerEventIdForComposite_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x1c
 uint8_t  _____padding_padding[0x1c];
/// @brief Field __padding, offset: 0x1c, size: 0x4, def value: None
 int32_t  _____padding;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x1c for alignment
 uint8_t  _____padding_padding_forAlignment[0x1c];
/// @brief Field __padding, offset: 0x1c, size: 0x4, def value: None
 int32_t  _____padding_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13384};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::InputActionState_BindingState) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
