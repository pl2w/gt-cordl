#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersFood.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersFood_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrittersFood.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersFood::*)()>(&::GlobalNamespace::CrittersFood::Initialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x55fe77c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersFood*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersFood*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersFood.SpawnData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersFood::*)(float_t, float_t, float_t)>(&::GlobalNamespace::CrittersFood::SpawnData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x55fe79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersFood*>(),
                        {"SpawnData", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersFood.ProcessLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersFood::*)()>(&::GlobalNamespace::CrittersFood::ProcessLocal)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x55fe7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersFood*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersFood*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersFood.ProcessRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersFood::*)()>(&::GlobalNamespace::CrittersFood::ProcessRemote)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x55fea60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersFood*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersFood*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersFood.ProcessFood
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersFood::*)()>(&::GlobalNamespace::CrittersFood::ProcessFood)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x55fe994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersFood*>(),
                        {"ProcessFood", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersFood.Feed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersFood::*)(float_t)>(&::GlobalNamespace::CrittersFood::Feed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x55fea8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersFood*>(),
                        {"Feed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersFood.UpdateSpecificActor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersFood::*)(::Photon::Pun::PhotonStream*)>(&::GlobalNamespace::CrittersFood::UpdateSpecificActor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x55feaa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersFood*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersFood*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersFood.SendDataByCrittersActorType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersFood::*)(::Photon::Pun::PhotonStream*)>(&::GlobalNamespace::CrittersFood::SendDataByCrittersActorType)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x55fec04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersFood*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersFood*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersFood.AddActorDataToList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CrittersFood::*)(::by_ref<::System::Collections::Generic::List_1<::System::Object*>*>)>(&::GlobalNamespace::CrittersFood::AddActorDataToList)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x55fed08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersFood*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersFood*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersFood.TotalActorDataLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CrittersFood::*)()>(&::GlobalNamespace::CrittersFood::TotalActorDataLength)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x55fef44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersFood*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersFood*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersFood.UpdateFromRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CrittersFood::*)(::ArrayW<::System::Object*>, int32_t)>(&::GlobalNamespace::CrittersFood::UpdateFromRPC)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x55fef5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersFood*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersFood*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersFood._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersFood::*)()>(&::GlobalNamespace::CrittersFood::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x55ff0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersFood*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::CrittersFood::__cordl_internal_get_maxFood()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxFood;
}
constexpr float_t const& GlobalNamespace::CrittersFood::__cordl_internal_get_maxFood() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxFood;
}
constexpr void GlobalNamespace::CrittersFood::__cordl_internal_set_maxFood(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxFood = value;
}
constexpr float_t& GlobalNamespace::CrittersFood::__cordl_internal_get_currentFood()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentFood;
}
constexpr float_t const& GlobalNamespace::CrittersFood::__cordl_internal_get_currentFood() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentFood;
}
constexpr void GlobalNamespace::CrittersFood::__cordl_internal_set_currentFood(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentFood = value;
}
constexpr int32_t& GlobalNamespace::CrittersFood::__cordl_internal_get_lastFood()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFood;
}
constexpr int32_t const& GlobalNamespace::CrittersFood::__cordl_internal_get_lastFood() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFood;
}
constexpr void GlobalNamespace::CrittersFood::__cordl_internal_set_lastFood(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastFood = value;
}
constexpr float_t& GlobalNamespace::CrittersFood::__cordl_internal_get_startingSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingSize;
}
constexpr float_t const& GlobalNamespace::CrittersFood::__cordl_internal_get_startingSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingSize;
}
constexpr void GlobalNamespace::CrittersFood::__cordl_internal_set_startingSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingSize = value;
}
constexpr float_t& GlobalNamespace::CrittersFood::__cordl_internal_get_currentSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSize;
}
constexpr float_t const& GlobalNamespace::CrittersFood::__cordl_internal_get_currentSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSize;
}
constexpr void GlobalNamespace::CrittersFood::__cordl_internal_set_currentSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSize = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CrittersFood::__cordl_internal_get_food()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___food;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CrittersFood::__cordl_internal_get_food() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___food;
}
constexpr void GlobalNamespace::CrittersFood::__cordl_internal_set_food(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___food = value;
}
constexpr bool& GlobalNamespace::CrittersFood::__cordl_internal_get_disableWhenEmpty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableWhenEmpty;
}
constexpr bool const& GlobalNamespace::CrittersFood::__cordl_internal_get_disableWhenEmpty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableWhenEmpty;
}
constexpr void GlobalNamespace::CrittersFood::__cordl_internal_set_disableWhenEmpty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableWhenEmpty = value;
}
inline void GlobalNamespace::CrittersFood::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersFood*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersFood::SpawnData(float_t  _maxFood, float_t  _currentFood, float_t  _startingSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersFood*>(),
                        {"SpawnData", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _maxFood, _currentFood, _startingSize);
}
inline bool GlobalNamespace::CrittersFood::ProcessLocal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersFood*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersFood::ProcessRemote()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersFood*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersFood::ProcessFood()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersFood*>(),
                        {"ProcessFood", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersFood::Feed(float_t  amountEaten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersFood*>(),
                        {"Feed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, amountEaten);
}
inline bool GlobalNamespace::CrittersFood::UpdateSpecificActor(::Photon::Pun::PhotonStream*  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersFood*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, stream);
}
inline void GlobalNamespace::CrittersFood::SendDataByCrittersActorType(::Photon::Pun::PhotonStream*  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersFood*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline int32_t GlobalNamespace::CrittersFood::AddActorDataToList(::by_ref<::System::Collections::Generic::List_1<::System::Object*>*>  objList)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersFood*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, objList);
}
inline int32_t GlobalNamespace::CrittersFood::TotalActorDataLength()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersFood*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::CrittersFood::UpdateFromRPC(::ArrayW<::System::Object*>  data, int32_t  startingIndex)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersFood*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, data, startingIndex);
}
inline void GlobalNamespace::CrittersFood::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersFood*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrittersFood* GlobalNamespace::CrittersFood::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersFood*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersFood::CrittersFood()   {
}
