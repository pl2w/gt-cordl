#pragma once
// IWYU pragma private; include "UnityEngine/Recorder/RecorderBindings.hpp"
#include "UnityEngine/Recorder/zzzz__SerializedDictionary_2_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/Recorder/zzzz__RecorderBindings_def.hpp"
#include "UnityEngine/Recorder/zzzz__RecorderBindings_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Recorder::RecorderBindings.SetBindingValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Recorder::RecorderBindings::*)(::StringW, ::UnityEngine::Object*)>(&::UnityEngine::Recorder::RecorderBindings::SetBindingValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb110138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Recorder::RecorderBindings*>(),
                        {"SetBindingValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Recorder::RecorderBindings.GetBindingValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::Recorder::RecorderBindings::*)(::StringW)>(&::UnityEngine::Recorder::RecorderBindings::GetBindingValue)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb1101b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Recorder::RecorderBindings*>(),
                        {"GetBindingValue", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Recorder::RecorderBindings.HasBindingValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Recorder::RecorderBindings::*)(::StringW)>(&::UnityEngine::Recorder::RecorderBindings::HasBindingValue)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb110240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Recorder::RecorderBindings*>(),
                        {"HasBindingValue", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Recorder::RecorderBindings.RemoveBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Recorder::RecorderBindings::*)(::StringW)>(&::UnityEngine::Recorder::RecorderBindings::RemoveBinding)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb1102ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Recorder::RecorderBindings*>(),
                        {"RemoveBinding", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Recorder::RecorderBindings.IsEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Recorder::RecorderBindings::*)()>(&::UnityEngine::Recorder::RecorderBindings::IsEmpty)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb11035c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Recorder::RecorderBindings*>(),
                        {"IsEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Recorder::RecorderBindings.DuplicateBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Recorder::RecorderBindings::*)(::StringW, ::StringW)>(&::UnityEngine::Recorder::RecorderBindings::DuplicateBinding)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb1103f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Recorder::RecorderBindings*>(),
                        {"DuplicateBinding", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Recorder::RecorderBindings.MarkSceneDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Recorder::RecorderBindings::*)()>(&::UnityEngine::Recorder::RecorderBindings::MarkSceneDirty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb110358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Recorder::RecorderBindings*>(),
                        {"MarkSceneDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Recorder::RecorderBindings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Recorder::RecorderBindings::*)()>(&::UnityEngine::Recorder::RecorderBindings::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb1104d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Recorder::RecorderBindings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Recorder::RecorderBindings_PropertyObjects*& UnityEngine::Recorder::RecorderBindings::__cordl_internal_get_m_References()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_References;
}
constexpr ::UnityEngine::Recorder::RecorderBindings_PropertyObjects* const& UnityEngine::Recorder::RecorderBindings::__cordl_internal_get_m_References() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_References;
}
constexpr void UnityEngine::Recorder::RecorderBindings::__cordl_internal_set_m_References(::UnityEngine::Recorder::RecorderBindings_PropertyObjects*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_References = value;
}
inline void UnityEngine::Recorder::RecorderBindings::SetBindingValue(::StringW  id, ::UnityEngine::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Recorder::RecorderBindings*>(),
                        {"SetBindingValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, value);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Recorder::RecorderBindings::GetBindingValue(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Recorder::RecorderBindings*>(),
                        {"GetBindingValue", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method, id);
}
inline bool UnityEngine::Recorder::RecorderBindings::HasBindingValue(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Recorder::RecorderBindings*>(),
                        {"HasBindingValue", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id);
}
inline void UnityEngine::Recorder::RecorderBindings::RemoveBinding(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Recorder::RecorderBindings*>(),
                        {"RemoveBinding", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline bool UnityEngine::Recorder::RecorderBindings::IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Recorder::RecorderBindings*>(),
                        {"IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Recorder::RecorderBindings::DuplicateBinding(::StringW  src, ::StringW  dst)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Recorder::RecorderBindings*>(),
                        {"DuplicateBinding", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, dst);
}
inline void UnityEngine::Recorder::RecorderBindings::MarkSceneDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Recorder::RecorderBindings*>(),
                        {"MarkSceneDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Recorder::RecorderBindings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Recorder::RecorderBindings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Recorder::RecorderBindings* UnityEngine::Recorder::RecorderBindings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Recorder::RecorderBindings*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Recorder::RecorderBindings::RecorderBindings()   {
}
//  Writing Method size for method: ::UnityEngine::Recorder::RecorderBindings_PropertyObjects._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Recorder::RecorderBindings_PropertyObjects::*)()>(&::UnityEngine::Recorder::RecorderBindings_PropertyObjects::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb110540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Recorder::RecorderBindings_PropertyObjects*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Recorder::RecorderBindings_PropertyObjects::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Recorder::RecorderBindings_PropertyObjects*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Recorder::RecorderBindings_PropertyObjects* UnityEngine::Recorder::RecorderBindings_PropertyObjects::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Recorder::RecorderBindings_PropertyObjects*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Recorder::RecorderBindings_PropertyObjects::RecorderBindings_PropertyObjects()   {
}
