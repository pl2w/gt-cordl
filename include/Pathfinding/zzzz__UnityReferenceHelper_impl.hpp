#pragma once
// IWYU pragma private; include "Pathfinding/UnityReferenceHelper.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Pathfinding/zzzz__UnityReferenceHelper_def.hpp"
//  Writing Method size for method: ::Pathfinding::UnityReferenceHelper.GetGUID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::UnityReferenceHelper::*)()>(&::Pathfinding::UnityReferenceHelper::GetGUID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ebbed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::UnityReferenceHelper*>(),
                        {"GetGUID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::UnityReferenceHelper.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::UnityReferenceHelper::*)()>(&::Pathfinding::UnityReferenceHelper::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ebbedc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::UnityReferenceHelper*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::UnityReferenceHelper.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::UnityReferenceHelper::*)()>(&::Pathfinding::UnityReferenceHelper::Reset)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5ebbee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::UnityReferenceHelper*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::UnityReferenceHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::UnityReferenceHelper::*)()>(&::Pathfinding::UnityReferenceHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ebc12c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::UnityReferenceHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Pathfinding::UnityReferenceHelper::__cordl_internal_get_guid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___guid;
}
constexpr ::StringW const& Pathfinding::UnityReferenceHelper::__cordl_internal_get_guid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___guid;
}
constexpr void Pathfinding::UnityReferenceHelper::__cordl_internal_set_guid(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___guid = value;
}
inline ::StringW Pathfinding::UnityReferenceHelper::GetGUID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::UnityReferenceHelper*>(),
                        {"GetGUID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Pathfinding::UnityReferenceHelper::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::UnityReferenceHelper*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::UnityReferenceHelper::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::UnityReferenceHelper*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::UnityReferenceHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::UnityReferenceHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::UnityReferenceHelper* Pathfinding::UnityReferenceHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::UnityReferenceHelper*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::UnityReferenceHelper::UnityReferenceHelper()   {
}
