#pragma once
// IWYU pragma private; include "Fusion/EnableOnSingleRunner.hpp"
#include "Fusion/zzzz__Behaviour_impl.hpp"
#include "Fusion/zzzz__RunnerVisibilityLink_PreferredRunners_impl.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "Fusion/zzzz__EnableOnSingleRunner_def.hpp"
#include "Fusion/zzzz__RunnerVisibilityLink_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Fusion::EnableOnSingleRunner.AddNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::EnableOnSingleRunner::*)(::System::Collections::Generic::List_1<::UnityW<::Fusion::RunnerVisibilityLink>>*)>(&::Fusion::EnableOnSingleRunner::AddNodes)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x60e8450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EnableOnSingleRunner*>(),
                        {"AddNodes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Fusion::RunnerVisibilityLink>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::EnableOnSingleRunner.FindRecognizedTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::EnableOnSingleRunner::*)()>(&::Fusion::EnableOnSingleRunner::FindRecognizedTypes)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x60f4250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EnableOnSingleRunner*>(),
                        {"FindRecognizedTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::EnableOnSingleRunner.FindNestedRecognizedTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::EnableOnSingleRunner::*)()>(&::Fusion::EnableOnSingleRunner::FindNestedRecognizedTypes)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x60f464c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EnableOnSingleRunner*>(),
                        {"FindNestedRecognizedTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::EnableOnSingleRunner.FindRecognizedComponentsOnGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Component>> (*)(::UnityEngine::GameObject*)>(&::Fusion::EnableOnSingleRunner::FindRecognizedComponentsOnGameObject)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x60f42c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EnableOnSingleRunner*>(),
                        {"FindRecognizedComponentsOnGameObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::EnableOnSingleRunner.FindRecognizedNestedComponents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Component>> (*)(::UnityEngine::GameObject*)>(&::Fusion::EnableOnSingleRunner::FindRecognizedNestedComponents)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x60f46c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EnableOnSingleRunner*>(),
                        {"FindRecognizedNestedComponents", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::EnableOnSingleRunner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::EnableOnSingleRunner::*)()>(&::Fusion::EnableOnSingleRunner::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x60f4a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EnableOnSingleRunner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::RunnerVisibilityLink_PreferredRunners& Fusion::EnableOnSingleRunner::__cordl_internal_get_PreferredRunner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreferredRunner;
}
constexpr ::GlobalNamespace::RunnerVisibilityLink_PreferredRunners const& Fusion::EnableOnSingleRunner::__cordl_internal_get_PreferredRunner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreferredRunner;
}
constexpr void Fusion::EnableOnSingleRunner::__cordl_internal_set_PreferredRunner(::GlobalNamespace::RunnerVisibilityLink_PreferredRunners  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreferredRunner = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Component>>& Fusion::EnableOnSingleRunner::__cordl_internal_get_Components()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Components;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Component>> const& Fusion::EnableOnSingleRunner::__cordl_internal_get_Components() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Components;
}
constexpr void Fusion::EnableOnSingleRunner::__cordl_internal_set_Components(::ArrayW<::UnityW<::UnityEngine::Component>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Components = value;
}
constexpr ::StringW& Fusion::EnableOnSingleRunner::__cordl_internal_get__guid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guid;
}
constexpr ::StringW const& Fusion::EnableOnSingleRunner::__cordl_internal_get__guid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guid;
}
constexpr void Fusion::EnableOnSingleRunner::__cordl_internal_set__guid(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____guid = value;
}
inline void Fusion::EnableOnSingleRunner::setStaticF_reusableComponentsList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*, "reusableComponentsList", ::Fusion::EnableOnSingleRunner*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* Fusion::EnableOnSingleRunner::getStaticF_reusableComponentsList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*, "reusableComponentsList", ::Fusion::EnableOnSingleRunner*>();
}
inline void Fusion::EnableOnSingleRunner::setStaticF_reusableComponentsList2(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*, "reusableComponentsList2", ::Fusion::EnableOnSingleRunner*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* Fusion::EnableOnSingleRunner::getStaticF_reusableComponentsList2()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*, "reusableComponentsList2", ::Fusion::EnableOnSingleRunner*>();
}
inline void Fusion::EnableOnSingleRunner::AddNodes(::System::Collections::Generic::List_1<::UnityW<::Fusion::RunnerVisibilityLink>>*  existingNodes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EnableOnSingleRunner*>(),
                        {"AddNodes", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::Fusion::RunnerVisibilityLink>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, existingNodes);
}
inline void Fusion::EnableOnSingleRunner::FindRecognizedTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EnableOnSingleRunner*>(),
                        {"FindRecognizedTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::EnableOnSingleRunner::FindNestedRecognizedTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EnableOnSingleRunner*>(),
                        {"FindNestedRecognizedTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::Component>> Fusion::EnableOnSingleRunner::FindRecognizedComponentsOnGameObject(::UnityEngine::GameObject*  go)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EnableOnSingleRunner*>(),
                        {"FindRecognizedComponentsOnGameObject", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Component>>>(nullptr, ___internal_method, go);
}
inline ::ArrayW<::UnityW<::UnityEngine::Component>> Fusion::EnableOnSingleRunner::FindRecognizedNestedComponents(::UnityEngine::GameObject*  go)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EnableOnSingleRunner*>(),
                        {"FindRecognizedNestedComponents", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Component>>>(nullptr, ___internal_method, go);
}
inline void Fusion::EnableOnSingleRunner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::EnableOnSingleRunner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::EnableOnSingleRunner* Fusion::EnableOnSingleRunner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::EnableOnSingleRunner*>());
}
// Ctor Parameters []
constexpr ::Fusion::EnableOnSingleRunner::EnableOnSingleRunner()   {
}
