#pragma once
// IWYU pragma private; include "Viveport/Leaderboard.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Viveport/zzzz__Leaderboard_def.hpp"
//  Writing Method size for method: ::Viveport::Leaderboard.get_Rank
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Viveport::Leaderboard::*)()>(&::Viveport::Leaderboard::get_Rank)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4bfd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Leaderboard*>(),
                        {"get_Rank", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Leaderboard.set_Rank
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Leaderboard::*)(int32_t)>(&::Viveport::Leaderboard::set_Rank)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4bfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Leaderboard*>(),
                        {"set_Rank", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Leaderboard.get_Score
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Viveport::Leaderboard::*)()>(&::Viveport::Leaderboard::get_Score)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4bfe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Leaderboard*>(),
                        {"get_Score", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Leaderboard.set_Score
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Leaderboard::*)(int32_t)>(&::Viveport::Leaderboard::set_Score)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4bff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Leaderboard*>(),
                        {"set_Score", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Leaderboard.get_UserName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Viveport::Leaderboard::*)()>(&::Viveport::Leaderboard::get_UserName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4bff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Leaderboard*>(),
                        {"get_UserName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Leaderboard.set_UserName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Leaderboard::*)(::StringW)>(&::Viveport::Leaderboard::set_UserName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4c000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Leaderboard*>(),
                        {"set_UserName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Leaderboard._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Leaderboard::*)()>(&::Viveport::Leaderboard::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b4c008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Leaderboard*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Viveport::Leaderboard::__cordl_internal_get__Rank_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rank_k__BackingField;
}
constexpr int32_t const& Viveport::Leaderboard::__cordl_internal_get__Rank_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rank_k__BackingField;
}
constexpr void Viveport::Leaderboard::__cordl_internal_set__Rank_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Rank_k__BackingField = value;
}
constexpr int32_t& Viveport::Leaderboard::__cordl_internal_get__Score_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Score_k__BackingField;
}
constexpr int32_t const& Viveport::Leaderboard::__cordl_internal_get__Score_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Score_k__BackingField;
}
constexpr void Viveport::Leaderboard::__cordl_internal_set__Score_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Score_k__BackingField = value;
}
constexpr ::StringW& Viveport::Leaderboard::__cordl_internal_get__UserName_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UserName_k__BackingField;
}
constexpr ::StringW const& Viveport::Leaderboard::__cordl_internal_get__UserName_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UserName_k__BackingField;
}
constexpr void Viveport::Leaderboard::__cordl_internal_set__UserName_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UserName_k__BackingField = value;
}
inline int32_t Viveport::Leaderboard::get_Rank()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Leaderboard*>(),
                        {"get_Rank", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Viveport::Leaderboard::set_Rank(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Leaderboard*>(),
                        {"set_Rank", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Viveport::Leaderboard::get_Score()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Leaderboard*>(),
                        {"get_Score", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Viveport::Leaderboard::set_Score(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Leaderboard*>(),
                        {"set_Score", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Viveport::Leaderboard::get_UserName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Leaderboard*>(),
                        {"get_UserName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Viveport::Leaderboard::set_UserName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Leaderboard*>(),
                        {"set_UserName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Viveport::Leaderboard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Leaderboard*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Viveport::Leaderboard* Viveport::Leaderboard::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::Leaderboard*>());
}
// Ctor Parameters []
constexpr ::Viveport::Leaderboard::Leaderboard()   {
}
