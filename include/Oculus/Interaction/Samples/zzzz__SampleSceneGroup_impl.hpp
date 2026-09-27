#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/SampleSceneGroup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Oculus/Interaction/Samples/zzzz__SampleSceneGroup_def.hpp"
#include "Oculus/Interaction/Samples/zzzz__SampleSceneGroup_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Samples::SampleSceneGroup.get_GroupName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Oculus::Interaction::Samples::SampleSceneGroup::*)()>(&::Oculus::Interaction::Samples::SampleSceneGroup::get_GroupName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43e800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup*>(),
                        {"get_GroupName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SampleSceneGroup.get_GroupEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Samples::SampleSceneGroup::*)()>(&::Oculus::Interaction::Samples::SampleSceneGroup::get_GroupEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43e808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup*>(),
                        {"get_GroupEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SampleSceneGroup.get_GroupDisplayOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::Samples::SampleSceneGroup::*)()>(&::Oculus::Interaction::Samples::SampleSceneGroup::get_GroupDisplayOrder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43e810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup*>(),
                        {"get_GroupDisplayOrder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SampleSceneGroup.get_SceneCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::Samples::SampleSceneGroup::*)()>(&::Oculus::Interaction::Samples::SampleSceneGroup::get_SceneCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa43e818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup*>(),
                        {"get_SceneCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SampleSceneGroup.GetScenes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>* (::Oculus::Interaction::Samples::SampleSceneGroup::*)()>(&::Oculus::Interaction::Samples::SampleSceneGroup::GetScenes)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa43e830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup*>(),
                        {"GetScenes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SampleSceneGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SampleSceneGroup::*)()>(&::Oculus::Interaction::Samples::SampleSceneGroup::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa43e8e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Interaction::Samples::SampleSceneGroup::__cordl_internal_get__groupName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groupName;
}
constexpr ::StringW const& Oculus::Interaction::Samples::SampleSceneGroup::__cordl_internal_get__groupName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groupName;
}
constexpr void Oculus::Interaction::Samples::SampleSceneGroup::__cordl_internal_set__groupName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____groupName = value;
}
constexpr bool& Oculus::Interaction::Samples::SampleSceneGroup::__cordl_internal_get__groupEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groupEnabled;
}
constexpr bool const& Oculus::Interaction::Samples::SampleSceneGroup::__cordl_internal_get__groupEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groupEnabled;
}
constexpr void Oculus::Interaction::Samples::SampleSceneGroup::__cordl_internal_set__groupEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____groupEnabled = value;
}
constexpr int32_t& Oculus::Interaction::Samples::SampleSceneGroup::__cordl_internal_get__groupDisplayOrder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groupDisplayOrder;
}
constexpr int32_t const& Oculus::Interaction::Samples::SampleSceneGroup::__cordl_internal_get__groupDisplayOrder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groupDisplayOrder;
}
constexpr void Oculus::Interaction::Samples::SampleSceneGroup::__cordl_internal_set__groupDisplayOrder(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____groupDisplayOrder = value;
}
constexpr ::ArrayW<::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo*>& Oculus::Interaction::Samples::SampleSceneGroup::__cordl_internal_get__sceneInfos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneInfos;
}
constexpr ::ArrayW<::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo*> const& Oculus::Interaction::Samples::SampleSceneGroup::__cordl_internal_get__sceneInfos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneInfos;
}
constexpr void Oculus::Interaction::Samples::SampleSceneGroup::__cordl_internal_set__sceneInfos(::ArrayW<::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sceneInfos = value;
}
inline ::StringW Oculus::Interaction::Samples::SampleSceneGroup::get_GroupName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup*>(),
                        {"get_GroupName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool Oculus::Interaction::Samples::SampleSceneGroup::get_GroupEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup*>(),
                        {"get_GroupEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Oculus::Interaction::Samples::SampleSceneGroup::get_GroupDisplayOrder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup*>(),
                        {"get_GroupDisplayOrder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Oculus::Interaction::Samples::SampleSceneGroup::get_SceneCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup*>(),
                        {"get_SceneCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>* Oculus::Interaction::Samples::SampleSceneGroup::GetScenes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup*>(),
                        {"GetScenes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>*>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::SampleSceneGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::SampleSceneGroup* Oculus::Interaction::Samples::SampleSceneGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::SampleSceneGroup*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::SampleSceneGroup::SampleSceneGroup()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::*)(int32_t)>(&::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa43e8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::*)()>(&::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa43e91c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::*)()>(&::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::MoveNext)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa43e920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14.System_Collections_Generic_IEnumerator_Oculus_Interaction_Samples_SampleSceneGroup_ISceneInfo__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo* (::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::*)()>(&::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::System_Collections_Generic_IEnumerator_Oculus_Interaction_Samples_SampleSceneGroup_ISceneInfo__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43e9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14*>(),
                        {"System.Collections.Generic.IEnumerator<Oculus.Interaction.Samples.SampleSceneGroup.ISceneInfo>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::*)()>(&::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa43e9e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::*)()>(&::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43ea20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14.System_Collections_Generic_IEnumerable_Oculus_Interaction_Samples_SampleSceneGroup_ISceneInfo__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>* (::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::*)()>(&::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::System_Collections_Generic_IEnumerable_Oculus_Interaction_Samples_SampleSceneGroup_ISceneInfo__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa43ea28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14*>(),
                        {"System.Collections.Generic.IEnumerable<Oculus.Interaction.Samples.SampleSceneGroup.ISceneInfo>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::*)()>(&::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa43eacc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*& Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo* const& Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::__cordl_internal_set___2__current(::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup>& Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup> const& Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::__cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::Samples::SampleSceneGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::ArrayW<::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo*>& Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr ::ArrayW<::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo*> const& Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr void Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::__cordl_internal_set___7__wrap1(::ArrayW<::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
constexpr int32_t& Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::__cordl_internal_get___7__wrap2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap2;
}
constexpr int32_t const& Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::__cordl_internal_get___7__wrap2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap2;
}
constexpr void Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::__cordl_internal_set___7__wrap2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap2 = value;
}
inline void Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo* Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::System_Collections_Generic_IEnumerator_Oculus_Interaction_Samples_SampleSceneGroup_ISceneInfo__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14*>(),
                        {"System.Collections.Generic.IEnumerator<Oculus.Interaction.Samples.SampleSceneGroup.ISceneInfo>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>* Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::System_Collections_Generic_IEnumerable_Oculus_Interaction_Samples_SampleSceneGroup_ISceneInfo__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14*>(),
                        {"System.Collections.Generic.IEnumerable<Oculus.Interaction.Samples.SampleSceneGroup.ISceneInfo>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14* Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>"
constexpr  Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::operator ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>* Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::i___System__Collections__Generic__IEnumerable_1___Oculus__Interaction__Samples__SampleSceneGroup_ISceneInfo__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>"
constexpr  Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::operator ::System::Collections::Generic::IEnumerator_1<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>* Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::i___System__Collections__Generic__IEnumerator_1___Oculus__Interaction__Samples__SampleSceneGroup_ISceneInfo__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::SampleSceneGroup__GetScenes_d__14::SampleSceneGroup__GetScenes_d__14()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo.Oculus_Interaction_Samples_SampleSceneGroup_ISceneInfo_get_DisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo::*)()>(&::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo::Oculus_Interaction_Samples_SampleSceneGroup_ISceneInfo_get_DisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43e8f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo*>(),
                        {"Oculus.Interaction.Samples.SampleSceneGroup.ISceneInfo.get_DisplayName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo.Oculus_Interaction_Samples_SampleSceneGroup_ISceneInfo_get_SceneName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo::*)()>(&::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo::Oculus_Interaction_Samples_SampleSceneGroup_ISceneInfo_get_SceneName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43e8fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo*>(),
                        {"Oculus.Interaction.Samples.SampleSceneGroup.ISceneInfo.get_SceneName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo.Oculus_Interaction_Samples_SampleSceneGroup_ISceneInfo_get_Thumbnail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo::*)()>(&::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo::Oculus_Interaction_Samples_SampleSceneGroup_ISceneInfo_get_Thumbnail)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43e904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo*>(),
                        {"Oculus.Interaction.Samples.SampleSceneGroup.ISceneInfo.get_Thumbnail", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo.Oculus_Interaction_Samples_SampleSceneGroup_ISceneInfo_get_SceneGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo::*)()>(&::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo::Oculus_Interaction_Samples_SampleSceneGroup_ISceneInfo_get_SceneGuid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43e90c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo*>(),
                        {"Oculus.Interaction.Samples.SampleSceneGroup.ISceneInfo.get_SceneGuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo::*)()>(&::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43e914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo::__cordl_internal_get_DisplayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr ::StringW const& Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo::__cordl_internal_get_DisplayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr void Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo::__cordl_internal_set_DisplayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisplayName = value;
}
constexpr ::StringW& Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo::__cordl_internal_get_SceneName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneName;
}
constexpr ::StringW const& Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo::__cordl_internal_get_SceneName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneName;
}
constexpr void Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo::__cordl_internal_set_SceneName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SceneName = value;
}
constexpr ::StringW& Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo::__cordl_internal_get_SceneGuid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneGuid;
}
constexpr ::StringW const& Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo::__cordl_internal_get_SceneGuid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneGuid;
}
constexpr void Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo::__cordl_internal_set_SceneGuid(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SceneGuid = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo::__cordl_internal_get_Thumbnail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Thumbnail;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo::__cordl_internal_get_Thumbnail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Thumbnail;
}
constexpr void Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo::__cordl_internal_set_Thumbnail(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Thumbnail = value;
}
inline ::StringW Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo::Oculus_Interaction_Samples_SampleSceneGroup_ISceneInfo_get_DisplayName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo*>(),
                        {"Oculus.Interaction.Samples.SampleSceneGroup.ISceneInfo.get_DisplayName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo::Oculus_Interaction_Samples_SampleSceneGroup_ISceneInfo_get_SceneName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo*>(),
                        {"Oculus.Interaction.Samples.SampleSceneGroup.ISceneInfo.get_SceneName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Sprite> Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo::Oculus_Interaction_Samples_SampleSceneGroup_ISceneInfo_get_Thumbnail()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo*>(),
                        {"Oculus.Interaction.Samples.SampleSceneGroup.ISceneInfo.get_Thumbnail", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method);
}
inline ::StringW Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo::Oculus_Interaction_Samples_SampleSceneGroup_ISceneInfo_get_SceneGuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo*>(),
                        {"Oculus.Interaction.Samples.SampleSceneGroup.ISceneInfo.get_SceneGuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo* Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo"
constexpr  Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo::operator ::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*() noexcept {
return static_cast<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo"
constexpr ::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo* Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo::i___Oculus__Interaction__Samples__SampleSceneGroup_ISceneInfo() noexcept {
return static_cast<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::SampleSceneGroup_SceneInfo::SampleSceneGroup_SceneInfo()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo.get_DisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo::*)()>(&::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo::get_DisplayName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>(),
                    {::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo.get_SceneName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo::*)()>(&::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo::get_SceneName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>(),
                    {::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo.get_SceneGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo::*)()>(&::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo::get_SceneGuid)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>(),
                    {::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo.get_Thumbnail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo::*)()>(&::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo::get_Thumbnail)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>(),
                    {::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::StringW Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo::get_DisplayName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo::get_SceneName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo::get_SceneGuid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Sprite> Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo::get_Thumbnail()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Samples::SampleSceneGroup_ISceneInfo*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method);
}
