#pragma once
// IWYU pragma private; include "GorillaTagScripts/GameObjectManagerWithId.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/zzzz__GameObjectManagerWithId_def.hpp"
#include "GorillaTagScripts/zzzz__GameObjectManagerWithId_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::GameObjectManagerWithId.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GameObjectManagerWithId::*)()>(&::GorillaTagScripts::GameObjectManagerWithId::Awake)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5bc4518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GameObjectManagerWithId*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GameObjectManagerWithId.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GameObjectManagerWithId::*)()>(&::GorillaTagScripts::GameObjectManagerWithId::OnDestroy)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5bc46fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GameObjectManagerWithId*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GameObjectManagerWithId.ReceiveEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GameObjectManagerWithId::*)(::StringW, ::UnityEngine::Transform*)>(&::GorillaTagScripts::GameObjectManagerWithId::ReceiveEvent)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5bc476c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GameObjectManagerWithId*>(),
                        {"ReceiveEvent", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GameObjectManagerWithId.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GameObjectManagerWithId::*)()>(&::GorillaTagScripts::GameObjectManagerWithId::Update)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5bc48dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GameObjectManagerWithId*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GameObjectManagerWithId._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GameObjectManagerWithId::*)()>(&::GorillaTagScripts::GameObjectManagerWithId::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5bc4ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GameObjectManagerWithId*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::GameObjectManagerWithId::__cordl_internal_get_objectsContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::GameObjectManagerWithId::__cordl_internal_get_objectsContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsContainer;
}
constexpr void GorillaTagScripts::GameObjectManagerWithId::__cordl_internal_set_objectsContainer(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectsContainer = value;
}
constexpr ::GlobalNamespace::GTZone& GorillaTagScripts::GameObjectManagerWithId::__cordl_internal_get_zone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr ::GlobalNamespace::GTZone const& GorillaTagScripts::GameObjectManagerWithId::__cordl_internal_get_zone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr void GorillaTagScripts::GameObjectManagerWithId::__cordl_internal_set_zone(::GlobalNamespace::GTZone  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zone = value;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::GameObjectManagerWithId_gameObjectData*>*& GorillaTagScripts::GameObjectManagerWithId::__cordl_internal_get_objectData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectData;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::GameObjectManagerWithId_gameObjectData*>* const& GorillaTagScripts::GameObjectManagerWithId::__cordl_internal_get_objectData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectData;
}
constexpr void GorillaTagScripts::GameObjectManagerWithId::__cordl_internal_set_objectData(::System::Collections::Generic::List_1<::GorillaTagScripts::GameObjectManagerWithId_gameObjectData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectData = value;
}
inline void GorillaTagScripts::GameObjectManagerWithId::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GameObjectManagerWithId*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GameObjectManagerWithId::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GameObjectManagerWithId*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GameObjectManagerWithId::ReceiveEvent(::StringW  id, ::UnityEngine::Transform*  _transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GameObjectManagerWithId*>(),
                        {"ReceiveEvent", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, _transform);
}
inline void GorillaTagScripts::GameObjectManagerWithId::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GameObjectManagerWithId*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GameObjectManagerWithId::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GameObjectManagerWithId*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::GameObjectManagerWithId* GorillaTagScripts::GameObjectManagerWithId::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::GameObjectManagerWithId*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::GameObjectManagerWithId::GameObjectManagerWithId()   {
}
//  Writing Method size for method: ::GorillaTagScripts::GameObjectManagerWithId_gameObjectData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GameObjectManagerWithId_gameObjectData::*)()>(&::GorillaTagScripts::GameObjectManagerWithId_gameObjectData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bc46f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GameObjectManagerWithId_gameObjectData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::GameObjectManagerWithId_gameObjectData::__cordl_internal_get_transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::GameObjectManagerWithId_gameObjectData::__cordl_internal_get_transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transform;
}
constexpr void GorillaTagScripts::GameObjectManagerWithId_gameObjectData::__cordl_internal_set_transform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::GameObjectManagerWithId_gameObjectData::__cordl_internal_get_followTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___followTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::GameObjectManagerWithId_gameObjectData::__cordl_internal_get_followTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___followTransform;
}
constexpr void GorillaTagScripts::GameObjectManagerWithId_gameObjectData::__cordl_internal_set_followTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___followTransform = value;
}
constexpr ::StringW& GorillaTagScripts::GameObjectManagerWithId_gameObjectData::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr ::StringW const& GorillaTagScripts::GameObjectManagerWithId_gameObjectData::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void GorillaTagScripts::GameObjectManagerWithId_gameObjectData::__cordl_internal_set_id(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___id = value;
}
constexpr bool& GorillaTagScripts::GameObjectManagerWithId_gameObjectData::__cordl_internal_get_isMatched()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isMatched;
}
constexpr bool const& GorillaTagScripts::GameObjectManagerWithId_gameObjectData::__cordl_internal_get_isMatched() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isMatched;
}
constexpr void GorillaTagScripts::GameObjectManagerWithId_gameObjectData::__cordl_internal_set_isMatched(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isMatched = value;
}
inline void GorillaTagScripts::GameObjectManagerWithId_gameObjectData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GameObjectManagerWithId_gameObjectData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::GameObjectManagerWithId_gameObjectData* GorillaTagScripts::GameObjectManagerWithId_gameObjectData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::GameObjectManagerWithId_gameObjectData*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::GameObjectManagerWithId_gameObjectData::GameObjectManagerWithId_gameObjectData()   {
}
