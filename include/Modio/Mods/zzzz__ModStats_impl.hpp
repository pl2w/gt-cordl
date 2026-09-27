#pragma once
// IWYU pragma private; include "Modio/Mods/ModStats.hpp"
#include "Modio/Mods/zzzz__ModRating_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Mods/zzzz__ModStats_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModStatsObject_def.hpp"
#include "Modio/Mods/zzzz__ModRating_def.hpp"
//  Writing Method size for method: ::Modio::Mods::ModStats.get_Subscribers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::Mods::ModStats::*)()>(&::Modio::Mods::ModStats::get_Subscribers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa03183c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModStats*>(),
                        {"get_Subscribers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModStats.set_Subscribers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModStats::*)(int64_t)>(&::Modio::Mods::ModStats::set_Subscribers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModStats*>(),
                        {"set_Subscribers", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModStats.get_Downloads
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::Mods::ModStats::*)()>(&::Modio::Mods::ModStats::get_Downloads)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa03184c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModStats*>(),
                        {"get_Downloads", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModStats.set_Downloads
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModStats::*)(int64_t)>(&::Modio::Mods::ModStats::set_Downloads)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModStats*>(),
                        {"set_Downloads", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModStats.get_RatingsPositive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::Mods::ModStats::*)()>(&::Modio::Mods::ModStats::get_RatingsPositive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa03185c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModStats*>(),
                        {"get_RatingsPositive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModStats.set_RatingsPositive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModStats::*)(int64_t)>(&::Modio::Mods::ModStats::set_RatingsPositive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModStats*>(),
                        {"set_RatingsPositive", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModStats.get_RatingsNegative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::Mods::ModStats::*)()>(&::Modio::Mods::ModStats::get_RatingsNegative)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa03186c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModStats*>(),
                        {"get_RatingsNegative", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModStats.set_RatingsNegative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModStats::*)(int64_t)>(&::Modio::Mods::ModStats::set_RatingsNegative)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModStats*>(),
                        {"set_RatingsNegative", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModStats.get_RatingsPercent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::Mods::ModStats::*)()>(&::Modio::Mods::ModStats::get_RatingsPercent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa03187c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModStats*>(),
                        {"get_RatingsPercent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModStats.set_RatingsPercent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModStats::*)(int64_t)>(&::Modio::Mods::ModStats::set_RatingsPercent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa031884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModStats*>(),
                        {"set_RatingsPercent", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModStats._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModStats::*)(::Modio::API::SchemaDefinitions::ModStatsObject, ::Modio::Mods::ModRating)>(&::Modio::Mods::ModStats::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa0290b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModStats*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::ModStatsObject>(), ::i2c::type_of<::Modio::Mods::ModRating>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModStats.UpdateEstimateFromLocalRatingChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModStats::*)(::Modio::Mods::ModRating)>(&::Modio::Mods::ModStats::UpdateEstimateFromLocalRatingChange)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa02a4f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModStats*>(),
                        {"UpdateEstimateFromLocalRatingChange", {}, {::i2c::type_of<::Modio::Mods::ModRating>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Mods::ModStats.UpdatePreviousRating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Mods::ModStats::*)(::Modio::Mods::ModRating)>(&::Modio::Mods::ModStats::UpdatePreviousRating)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa03188c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModStats*>(),
                        {"UpdatePreviousRating", {}, {::i2c::type_of<::Modio::Mods::ModRating>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& Modio::Mods::ModStats::__cordl_internal_get__Subscribers_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Subscribers_k__BackingField;
}
constexpr int64_t const& Modio::Mods::ModStats::__cordl_internal_get__Subscribers_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Subscribers_k__BackingField;
}
constexpr void Modio::Mods::ModStats::__cordl_internal_set__Subscribers_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Subscribers_k__BackingField = value;
}
constexpr int64_t& Modio::Mods::ModStats::__cordl_internal_get__Downloads_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Downloads_k__BackingField;
}
constexpr int64_t const& Modio::Mods::ModStats::__cordl_internal_get__Downloads_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Downloads_k__BackingField;
}
constexpr void Modio::Mods::ModStats::__cordl_internal_set__Downloads_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Downloads_k__BackingField = value;
}
constexpr int64_t& Modio::Mods::ModStats::__cordl_internal_get__RatingsPositive_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RatingsPositive_k__BackingField;
}
constexpr int64_t const& Modio::Mods::ModStats::__cordl_internal_get__RatingsPositive_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RatingsPositive_k__BackingField;
}
constexpr void Modio::Mods::ModStats::__cordl_internal_set__RatingsPositive_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RatingsPositive_k__BackingField = value;
}
constexpr int64_t& Modio::Mods::ModStats::__cordl_internal_get__RatingsNegative_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RatingsNegative_k__BackingField;
}
constexpr int64_t const& Modio::Mods::ModStats::__cordl_internal_get__RatingsNegative_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RatingsNegative_k__BackingField;
}
constexpr void Modio::Mods::ModStats::__cordl_internal_set__RatingsNegative_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RatingsNegative_k__BackingField = value;
}
constexpr int64_t& Modio::Mods::ModStats::__cordl_internal_get__RatingsPercent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RatingsPercent_k__BackingField;
}
constexpr int64_t const& Modio::Mods::ModStats::__cordl_internal_get__RatingsPercent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RatingsPercent_k__BackingField;
}
constexpr void Modio::Mods::ModStats::__cordl_internal_set__RatingsPercent_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RatingsPercent_k__BackingField = value;
}
constexpr ::Modio::Mods::ModRating& Modio::Mods::ModStats::__cordl_internal_get__previousRating()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousRating;
}
constexpr ::Modio::Mods::ModRating const& Modio::Mods::ModStats::__cordl_internal_get__previousRating() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousRating;
}
constexpr void Modio::Mods::ModStats::__cordl_internal_set__previousRating(::Modio::Mods::ModRating  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousRating = value;
}
inline int64_t Modio::Mods::ModStats::get_Subscribers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModStats*>(),
                        {"get_Subscribers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Modio::Mods::ModStats::set_Subscribers(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModStats*>(),
                        {"set_Subscribers", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t Modio::Mods::ModStats::get_Downloads()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModStats*>(),
                        {"get_Downloads", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Modio::Mods::ModStats::set_Downloads(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModStats*>(),
                        {"set_Downloads", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t Modio::Mods::ModStats::get_RatingsPositive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModStats*>(),
                        {"get_RatingsPositive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Modio::Mods::ModStats::set_RatingsPositive(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModStats*>(),
                        {"set_RatingsPositive", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t Modio::Mods::ModStats::get_RatingsNegative()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModStats*>(),
                        {"get_RatingsNegative", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Modio::Mods::ModStats::set_RatingsNegative(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModStats*>(),
                        {"set_RatingsNegative", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t Modio::Mods::ModStats::get_RatingsPercent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModStats*>(),
                        {"get_RatingsPercent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Modio::Mods::ModStats::set_RatingsPercent(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModStats*>(),
                        {"set_RatingsPercent", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Mods::ModStats::_ctor(::Modio::API::SchemaDefinitions::ModStatsObject  statsObject, ::Modio::Mods::ModRating  previousRating)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModStats*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::ModStatsObject>(), ::i2c::type_of<::Modio::Mods::ModRating>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, statsObject, previousRating);
}
inline void Modio::Mods::ModStats::UpdateEstimateFromLocalRatingChange(::Modio::Mods::ModRating  rating)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModStats*>(),
                        {"UpdateEstimateFromLocalRatingChange", {}, {::i2c::type_of<::Modio::Mods::ModRating>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rating);
}
inline void Modio::Mods::ModStats::UpdatePreviousRating(::Modio::Mods::ModRating  rating)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Mods::ModStats*>(),
                        {"UpdatePreviousRating", {}, {::i2c::type_of<::Modio::Mods::ModRating>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rating);
}
inline ::Modio::Mods::ModStats* Modio::Mods::ModStats::New_ctor(::Modio::API::SchemaDefinitions::ModStatsObject  statsObject, ::Modio::Mods::ModRating  previousRating)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Mods::ModStats*>(statsObject, previousRating));
}
// Ctor Parameters []
constexpr ::Modio::Mods::ModStats::ModStats()   {
}
