#pragma once
// IWYU pragma private; include "Fusion/SimulationInputCollection.hpp"
#include "Fusion/zzzz__SimulationInput_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__SimulationInputCollection_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "Fusion/zzzz__SimulationInput_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Fusion::SimulationInputCollection.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::SimulationInputCollection::*)()>(&::Fusion::SimulationInputCollection::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60047d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInputCollection*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInputCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationInputCollection::*)(int32_t)>(&::Fusion::SimulationInputCollection::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x60047d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInputCollection*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInputCollection.GetByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationInput* (::Fusion::SimulationInputCollection::*)(int32_t)>(&::Fusion::SimulationInputCollection::GetByIndex)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x60048f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInputCollection*>(),
                        {"GetByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInputCollection.GetByPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::SimulationInput* (::Fusion::SimulationInputCollection::*)(::Fusion::PlayerRef)>(&::Fusion::SimulationInputCollection::GetByPlayer)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6004940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInputCollection*>(),
                        {"GetByPlayer", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInputCollection.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationInputCollection::*)()>(&::Fusion::SimulationInputCollection::Clear)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x60049b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInputCollection*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::SimulationInputCollection.AddInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::SimulationInputCollection::*)(::Fusion::SimulationInput*)>(&::Fusion::SimulationInputCollection::AddInput)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6004a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInputCollection*>(),
                        {"AddInput", {}, {::i2c::type_of<::Fusion::SimulationInput*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::SimulationInputCollection::__cordl_internal_get__count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____count;
}
constexpr int32_t const& Fusion::SimulationInputCollection::__cordl_internal_get__count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____count;
}
constexpr void Fusion::SimulationInputCollection::__cordl_internal_set__count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____count = value;
}
constexpr ::ArrayW<::Fusion::SimulationInput*>& Fusion::SimulationInputCollection::__cordl_internal_get__byIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____byIndex;
}
constexpr ::ArrayW<::Fusion::SimulationInput*> const& Fusion::SimulationInputCollection::__cordl_internal_get__byIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____byIndex;
}
constexpr void Fusion::SimulationInputCollection::__cordl_internal_set__byIndex(::ArrayW<::Fusion::SimulationInput*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____byIndex = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::PlayerRef,::Fusion::SimulationInput*>*& Fusion::SimulationInputCollection::__cordl_internal_get__byPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____byPlayer;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::PlayerRef,::Fusion::SimulationInput*>* const& Fusion::SimulationInputCollection::__cordl_internal_get__byPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____byPlayer;
}
constexpr void Fusion::SimulationInputCollection::__cordl_internal_set__byPlayer(::System::Collections::Generic::Dictionary_2<::Fusion::PlayerRef,::Fusion::SimulationInput*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____byPlayer = value;
}
inline int32_t Fusion::SimulationInputCollection::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInputCollection*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::SimulationInputCollection::_ctor(int32_t  playerCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInputCollection*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerCount);
}
inline ::Fusion::SimulationInput* Fusion::SimulationInputCollection::GetByIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInputCollection*>(),
                        {"GetByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationInput*>(this, ___internal_method, index);
}
inline ::Fusion::SimulationInput* Fusion::SimulationInputCollection::GetByPlayer(::Fusion::PlayerRef  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInputCollection*>(),
                        {"GetByPlayer", {}, {::i2c::type_of<::Fusion::PlayerRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SimulationInput*>(this, ___internal_method, player);
}
inline void Fusion::SimulationInputCollection::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInputCollection*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::SimulationInputCollection::AddInput(::Fusion::SimulationInput*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::SimulationInputCollection*>(),
                        {"AddInput", {}, {::i2c::type_of<::Fusion::SimulationInput*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline ::Fusion::SimulationInputCollection* Fusion::SimulationInputCollection::New_ctor(int32_t  playerCount)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::SimulationInputCollection*>(playerCount));
}
// Ctor Parameters []
constexpr ::Fusion::SimulationInputCollection::SimulationInputCollection()   {
}
