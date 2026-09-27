#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/Debug/ActiveStateDebugTreeUI.hpp"
#include "Oculus/Interaction/DebugTree/zzzz__DebugTreeUI_1_impl.hpp"
#include "Oculus/Interaction/PoseDetection/Debug/zzzz__ActiveStateDebugTreeUI_def.hpp"
#include "Oculus/Interaction/DebugTree/zzzz__DebugTree_1_def.hpp"
#include "Oculus/Interaction/DebugTree/zzzz__INodeUI_1_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IActiveState* (::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI::*)()>(&::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI::get_Value)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4aaaa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI.get_NodePrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::DebugTree::INodeUI_1<::Oculus::Interaction::IActiveState*>* (::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI::*)()>(&::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI::get_NodePrefab)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4aaaec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI.CreateTree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::DebugTree::DebugTree_1<::Oculus::Interaction::IActiveState*>* (::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI::*)(::Oculus::Interaction::IActiveState*)>(&::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI::CreateTree)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4aab34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI.TitleForValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI::*)(::Oculus::Interaction::IActiveState*)>(&::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI::TitleForValue)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa4aab8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI::*)()>(&::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4aac58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI::__cordl_internal_get__activeState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeState;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI::__cordl_internal_get__activeState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeState;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI::__cordl_internal_set__activeState(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeState = value;
}
constexpr ::UnityW<::UnityEngine::Component>& Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI::__cordl_internal_get__nodePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nodePrefab;
}
constexpr ::UnityW<::UnityEngine::Component> const& Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI::__cordl_internal_get__nodePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nodePrefab;
}
constexpr void Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI::__cordl_internal_set__nodePrefab(::UnityW<::UnityEngine::Component>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nodePrefab = value;
}
inline ::Oculus::Interaction::IActiveState* Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI::get_Value()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IActiveState*>(this, ___internal_method);
}
inline ::Oculus::Interaction::DebugTree::INodeUI_1<::Oculus::Interaction::IActiveState*>* Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI::get_NodePrefab()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::DebugTree::INodeUI_1<::Oculus::Interaction::IActiveState*>*>(this, ___internal_method);
}
inline ::Oculus::Interaction::DebugTree::DebugTree_1<::Oculus::Interaction::IActiveState*>* Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI::CreateTree(::Oculus::Interaction::IActiveState*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::DebugTree::DebugTree_1<::Oculus::Interaction::IActiveState*>*>(this, ___internal_method, value);
}
inline ::StringW Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI::TitleForValue(::Oculus::Interaction::IActiveState*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline void Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI* Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugTreeUI::ActiveStateDebugTreeUI()   {
}
