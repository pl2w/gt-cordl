#pragma once
// IWYU pragma private; include "UnityEngine/Accessibility/AccessibilityNode.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityRole_impl.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityState_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__SystemLanguage_impl.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityNode_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityAction_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityHierarchy_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityNodeData_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityNode_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityRole_def.hpp"
#include "UnityEngine/Accessibility/zzzz__AccessibilityState_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__SystemLanguage_def.hpp"
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.FreeNative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityNode::*)(bool)>(&::UnityEngine::Accessibility::AccessibilityNode::FreeNative)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0xb51ca40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"FreeNative", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.get_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51d05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.get_label
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::get_label)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51d064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_label", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.get_value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51d06c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.get_hint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::get_hint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51d074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_hint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.get_isActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::get_isActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51d07c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_isActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.get_role
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Accessibility::AccessibilityRole (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::get_role)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51d084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_role", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.get_allowsDirectInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::get_allowsDirectInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51d08c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_allowsDirectInteraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.get_state
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Accessibility::AccessibilityState (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::get_state)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51d094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_state", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.get_parent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Accessibility::AccessibilityNode* (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::get_parent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51d09c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_parent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.get_childList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::UnityEngine::Accessibility::AccessibilityNode*>* (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::get_childList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51d0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_childList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.get_frame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::get_frame)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb51cfa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_frame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.SetFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityNode::*)(::UnityEngine::Rect)>(&::UnityEngine::Accessibility::AccessibilityNode::SetFrame)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb51d0e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"SetFrame", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.get_frameGetter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_1<::UnityEngine::Rect>* (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::get_frameGetter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51d170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_frameGetter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.CalculateFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::CalculateFrame)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb51d0ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"CalculateFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.get_language
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SystemLanguage (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::get_language)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51d178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_language", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.GetNodeData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityNode::*)(::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>)>(&::UnityEngine::Accessibility::AccessibilityNode::GetNodeData)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xb51afe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"GetNodeData", {}, {::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.ChildrenChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::ChildrenChanged)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xb51d180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"ChildrenChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.ActionsChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::ActionsChanged)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xb51d2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"ActionsChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.IsInActiveHierarchy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::IsInActiveHierarchy)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb51cfec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"IsInActiveHierarchy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.NotifyFocusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityNode::*)(bool)>(&::UnityEngine::Accessibility::AccessibilityNode::NotifyFocusChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb51bd9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"NotifyFocusChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.InvokeFocusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityNode::*)(bool)>(&::UnityEngine::Accessibility::AccessibilityNode::InvokeFocusChanged)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb51aac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"InvokeFocusChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.InvokeSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::InvokeSelected)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb51bf08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"InvokeSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.InvokeIncremented
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::InvokeIncremented)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb51bfd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"InvokeIncremented", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.InvokeDecremented
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::InvokeDecremented)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb51c0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"InvokeDecremented", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Accessibility::AccessibilityNode.Dismissed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Accessibility::AccessibilityNode::*)()>(&::UnityEngine::Accessibility::AccessibilityNode::Dismissed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb51c17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"Dismissed", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get__id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id_k__BackingField;
}
constexpr int32_t const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get__id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id_k__BackingField;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set__id_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____id_k__BackingField = value;
}
constexpr ::System::Func_1<::UnityEngine::Rect>*& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_FrameGetter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FrameGetter;
}
constexpr ::System::Func_1<::UnityEngine::Rect>* const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_FrameGetter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FrameGetter;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_m_FrameGetter(::System::Func_1<::UnityEngine::Rect>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FrameGetter = value;
}
constexpr ::System::Action_2<::UnityEngine::Accessibility::AccessibilityNode*,bool>*& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_focusChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___focusChanged;
}
constexpr ::System::Action_2<::UnityEngine::Accessibility::AccessibilityNode*,bool>* const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_focusChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___focusChanged;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_focusChanged(::System::Action_2<::UnityEngine::Accessibility::AccessibilityNode*,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___focusChanged = value;
}
constexpr ::System::Func_1<bool>*& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_selected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selected;
}
constexpr ::System::Func_1<bool>* const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_selected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selected;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_selected(::System::Func_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selected = value;
}
constexpr ::System::Action*& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_incremented()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incremented;
}
constexpr ::System::Action* const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_incremented() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incremented;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_incremented(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___incremented = value;
}
constexpr ::System::Action*& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_decremented()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decremented;
}
constexpr ::System::Action* const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_decremented() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decremented;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_decremented(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___decremented = value;
}
constexpr ::System::Func_1<bool>*& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_dismissed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dismissed;
}
constexpr ::System::Func_1<bool>* const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_dismissed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dismissed;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_dismissed(::System::Func_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dismissed = value;
}
constexpr ::StringW& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_Label()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Label;
}
constexpr ::StringW const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_Label() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Label;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_m_Label(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Label = value;
}
constexpr ::StringW& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_Value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Value;
}
constexpr ::StringW const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_Value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Value;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_m_Value(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Value = value;
}
constexpr ::StringW& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_Hint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Hint;
}
constexpr ::StringW const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_Hint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Hint;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_m_Hint(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Hint = value;
}
constexpr bool& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_IsActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsActive;
}
constexpr bool const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_IsActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsActive;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_m_IsActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsActive = value;
}
constexpr ::UnityEngine::Accessibility::AccessibilityRole& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_Role()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Role;
}
constexpr ::UnityEngine::Accessibility::AccessibilityRole const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_Role() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Role;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_m_Role(::UnityEngine::Accessibility::AccessibilityRole  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Role = value;
}
constexpr bool& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_AllowsDirectInteraction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowsDirectInteraction;
}
constexpr bool const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_AllowsDirectInteraction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowsDirectInteraction;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_m_AllowsDirectInteraction(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AllowsDirectInteraction = value;
}
constexpr ::UnityEngine::Accessibility::AccessibilityState& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_State()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_State;
}
constexpr ::UnityEngine::Accessibility::AccessibilityState const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_State() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_State;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_m_State(::UnityEngine::Accessibility::AccessibilityState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_State = value;
}
constexpr ::UnityEngine::Accessibility::AccessibilityNode*& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_Parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Parent;
}
constexpr ::UnityEngine::Accessibility::AccessibilityNode* const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_Parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Parent;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_m_Parent(::UnityEngine::Accessibility::AccessibilityNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Parent = value;
}
constexpr ::UnityEngine::Accessibility::AccessibilityNode_ObservableList_1<::UnityEngine::Accessibility::AccessibilityNode*>*& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_Children()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Children;
}
constexpr ::UnityEngine::Accessibility::AccessibilityNode_ObservableList_1<::UnityEngine::Accessibility::AccessibilityNode*>* const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_Children() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Children;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_m_Children(::UnityEngine::Accessibility::AccessibilityNode_ObservableList_1<::UnityEngine::Accessibility::AccessibilityNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Children = value;
}
constexpr ::UnityEngine::Accessibility::AccessibilityNode_ObservableList_1<::UnityEngine::Accessibility::AccessibilityAction*>*& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_Actions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Actions;
}
constexpr ::UnityEngine::Accessibility::AccessibilityNode_ObservableList_1<::UnityEngine::Accessibility::AccessibilityAction*>* const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_Actions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Actions;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_m_Actions(::UnityEngine::Accessibility::AccessibilityNode_ObservableList_1<::UnityEngine::Accessibility::AccessibilityAction*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Actions = value;
}
constexpr ::UnityEngine::Rect& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_Frame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Frame;
}
constexpr ::UnityEngine::Rect const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_Frame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Frame;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_m_Frame(::UnityEngine::Rect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Frame = value;
}
constexpr ::UnityEngine::SystemLanguage& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_Language()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Language;
}
constexpr ::UnityEngine::SystemLanguage const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_Language() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Language;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_m_Language(::UnityEngine::SystemLanguage  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Language = value;
}
constexpr ::UnityEngine::Accessibility::AccessibilityHierarchy*& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_Hierarchy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Hierarchy;
}
constexpr ::UnityEngine::Accessibility::AccessibilityHierarchy* const& UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_get_m_Hierarchy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Hierarchy;
}
constexpr void UnityEngine::Accessibility::AccessibilityNode::__cordl_internal_set_m_Hierarchy(::UnityEngine::Accessibility::AccessibilityHierarchy*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Hierarchy = value;
}
inline void UnityEngine::Accessibility::AccessibilityNode::FreeNative(bool  freeChildren)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"FreeNative", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, freeChildren);
}
inline int32_t UnityEngine::Accessibility::AccessibilityNode::get_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW UnityEngine::Accessibility::AccessibilityNode::get_label()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_label", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::Accessibility::AccessibilityNode::get_value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW UnityEngine::Accessibility::AccessibilityNode::get_hint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_hint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool UnityEngine::Accessibility::AccessibilityNode::get_isActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_isActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Accessibility::AccessibilityRole UnityEngine::Accessibility::AccessibilityNode::get_role()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_role", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Accessibility::AccessibilityRole>(this, ___internal_method);
}
inline bool UnityEngine::Accessibility::AccessibilityNode::get_allowsDirectInteraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_allowsDirectInteraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Accessibility::AccessibilityState UnityEngine::Accessibility::AccessibilityNode::get_state()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_state", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Accessibility::AccessibilityState>(this, ___internal_method);
}
inline ::UnityEngine::Accessibility::AccessibilityNode* UnityEngine::Accessibility::AccessibilityNode::get_parent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_parent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Accessibility::AccessibilityNode*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::UnityEngine::Accessibility::AccessibilityNode*>* UnityEngine::Accessibility::AccessibilityNode::get_childList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_childList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::UnityEngine::Accessibility::AccessibilityNode*>*>(this, ___internal_method);
}
inline ::UnityEngine::Rect UnityEngine::Accessibility::AccessibilityNode::get_frame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_frame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityNode::SetFrame(::UnityEngine::Rect  frame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"SetFrame", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame);
}
inline ::System::Func_1<::UnityEngine::Rect>* UnityEngine::Accessibility::AccessibilityNode::get_frameGetter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_frameGetter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_1<::UnityEngine::Rect>*>(this, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityNode::CalculateFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"CalculateFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::SystemLanguage UnityEngine::Accessibility::AccessibilityNode::get_language()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"get_language", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SystemLanguage>(this, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityNode::GetNodeData(::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>  nodeData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"GetNodeData", {}, {::i2c::type_of<::by_ref<::UnityEngine::Accessibility::AccessibilityNodeData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeData);
}
inline void UnityEngine::Accessibility::AccessibilityNode::ChildrenChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"ChildrenChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityNode::ActionsChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"ActionsChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Accessibility::AccessibilityNode::IsInActiveHierarchy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"IsInActiveHierarchy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityNode::NotifyFocusChanged(bool  isNodeFocused)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"NotifyFocusChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isNodeFocused);
}
inline void UnityEngine::Accessibility::AccessibilityNode::InvokeFocusChanged(bool  isNodeFocused)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"InvokeFocusChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isNodeFocused);
}
inline bool UnityEngine::Accessibility::AccessibilityNode::InvokeSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"InvokeSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityNode::InvokeIncremented()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"InvokeIncremented", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Accessibility::AccessibilityNode::InvokeDecremented()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"InvokeDecremented", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Accessibility::AccessibilityNode::Dismissed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode*>(),
                        {"Dismissed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Accessibility::AccessibilityNode::AccessibilityNode()   {
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<T>*& UnityEngine::Accessibility::AccessibilityNode_ObservableList_1<T>::__cordl_internal_get_m_Items()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Items;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<T>* const& UnityEngine::Accessibility::AccessibilityNode_ObservableList_1<T>::__cordl_internal_get_m_Items() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Items;
}
template<typename T>
constexpr void UnityEngine::Accessibility::AccessibilityNode_ObservableList_1<T>::__cordl_internal_set_m_Items(::System::Collections::Generic::List_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Items = value;
}
template<typename T>
constexpr ::System::Action*& UnityEngine::Accessibility::AccessibilityNode_ObservableList_1<T>::__cordl_internal_get_listChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listChanged;
}
template<typename T>
constexpr ::System::Action* const& UnityEngine::Accessibility::AccessibilityNode_ObservableList_1<T>::__cordl_internal_get_listChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listChanged;
}
template<typename T>
constexpr void UnityEngine::Accessibility::AccessibilityNode_ObservableList_1<T>::__cordl_internal_set_listChanged(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___listChanged = value;
}
template<typename T>
inline int32_t UnityEngine::Accessibility::AccessibilityNode_ObservableList_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode_ObservableList_1<T>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline T UnityEngine::Accessibility::AccessibilityNode_ObservableList_1<T>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode_ObservableList_1<T>*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, index);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* UnityEngine::Accessibility::AccessibilityNode_ObservableList_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode_ObservableList_1<T>*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::Accessibility::AccessibilityNode_ObservableList_1<T>::add_listChanged(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode_ObservableList_1<T>*>(),
                        {"add_listChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void UnityEngine::Accessibility::AccessibilityNode_ObservableList_1<T>::remove_listChanged(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Accessibility::AccessibilityNode_ObservableList_1<T>*>(),
                        {"remove_listChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::Accessibility::AccessibilityNode_ObservableList_1<T>::AccessibilityNode_ObservableList_1()   {
}
