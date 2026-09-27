#pragma once
// IWYU pragma private; include "Unity/Cinemachine/PolyPathEnum.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Cinemachine/zzzz__PolyPathEnum_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__PolyPathBase_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::PolyPathEnum._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::PolyPathEnum::*)(::System::Collections::Generic::List_1<::Unity::Cinemachine::PolyPathBase*>*)>(&::Unity::Cinemachine::PolyPathEnum::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xaefb1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathEnum*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PolyPathBase*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PolyPathEnum.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::PolyPathEnum::*)()>(&::Unity::Cinemachine::PolyPathEnum::MoveNext)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xaefb300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathEnum*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PolyPathEnum.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::PolyPathEnum::*)()>(&::Unity::Cinemachine::PolyPathEnum::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaefb35c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathEnum*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PolyPathEnum.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::PolyPathBase* (::Unity::Cinemachine::PolyPathEnum::*)()>(&::Unity::Cinemachine::PolyPathEnum::get_Current)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xaefb368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathEnum*>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PolyPathEnum.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Unity::Cinemachine::PolyPathEnum::*)()>(&::Unity::Cinemachine::PolyPathEnum::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaefb40c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathEnum*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::PolyPathBase*>*& Unity::Cinemachine::PolyPathEnum::__cordl_internal_get__ppbList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ppbList;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::PolyPathBase*>* const& Unity::Cinemachine::PolyPathEnum::__cordl_internal_get__ppbList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ppbList;
}
constexpr void Unity::Cinemachine::PolyPathEnum::__cordl_internal_set__ppbList(::System::Collections::Generic::List_1<::Unity::Cinemachine::PolyPathBase*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ppbList = value;
}
constexpr int32_t& Unity::Cinemachine::PolyPathEnum::__cordl_internal_get_position()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___position;
}
constexpr int32_t const& Unity::Cinemachine::PolyPathEnum::__cordl_internal_get_position() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___position;
}
constexpr void Unity::Cinemachine::PolyPathEnum::__cordl_internal_set_position(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___position = value;
}
inline void Unity::Cinemachine::PolyPathEnum::_ctor(::System::Collections::Generic::List_1<::Unity::Cinemachine::PolyPathBase*>*  childs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathEnum*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Unity::Cinemachine::PolyPathBase*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, childs);
}
inline bool Unity::Cinemachine::PolyPathEnum::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathEnum*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Unity::Cinemachine::PolyPathEnum::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathEnum*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::PolyPathBase* Unity::Cinemachine::PolyPathEnum::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathEnum*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::PolyPathBase*>(this, ___internal_method);
}
inline ::System::Object* Unity::Cinemachine::PolyPathEnum::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyPathEnum*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::Unity::Cinemachine::PolyPathEnum* Unity::Cinemachine::PolyPathEnum::New_ctor(::System::Collections::Generic::List_1<::Unity::Cinemachine::PolyPathBase*>*  childs)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::PolyPathEnum*>(childs));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Unity::Cinemachine::PolyPathEnum::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Unity::Cinemachine::PolyPathEnum::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::PolyPathEnum::PolyPathEnum()   {
}
