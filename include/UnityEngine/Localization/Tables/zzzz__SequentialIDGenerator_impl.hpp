#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Tables/SequentialIDGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Tables/zzzz__SequentialIDGenerator_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__IKeyGenerator_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SequentialIDGenerator.get_NextAvailableId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::Localization::Tables::SequentialIDGenerator::*)()>(&::UnityEngine::Localization::Tables::SequentialIDGenerator::get_NextAvailableId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb017e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SequentialIDGenerator*>(),
                        {"get_NextAvailableId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SequentialIDGenerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::SequentialIDGenerator::*)()>(&::UnityEngine::Localization::Tables::SequentialIDGenerator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb017e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SequentialIDGenerator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SequentialIDGenerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::SequentialIDGenerator::*)(int64_t)>(&::UnityEngine::Localization::Tables::SequentialIDGenerator::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb017ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SequentialIDGenerator*>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::SequentialIDGenerator.GetNextKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::Localization::Tables::SequentialIDGenerator::*)()>(&::UnityEngine::Localization::Tables::SequentialIDGenerator::GetNextKey)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb017ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SequentialIDGenerator*>(),
                        {"GetNextKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& UnityEngine::Localization::Tables::SequentialIDGenerator::__cordl_internal_get_m_NextAvailableId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NextAvailableId;
}
constexpr int64_t const& UnityEngine::Localization::Tables::SequentialIDGenerator::__cordl_internal_get_m_NextAvailableId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NextAvailableId;
}
constexpr void UnityEngine::Localization::Tables::SequentialIDGenerator::__cordl_internal_set_m_NextAvailableId(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NextAvailableId = value;
}
inline int64_t UnityEngine::Localization::Tables::SequentialIDGenerator::get_NextAvailableId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SequentialIDGenerator*>(),
                        {"get_NextAvailableId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void UnityEngine::Localization::Tables::SequentialIDGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SequentialIDGenerator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Tables::SequentialIDGenerator::_ctor(int64_t  startingId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SequentialIDGenerator*>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startingId);
}
inline int64_t UnityEngine::Localization::Tables::SequentialIDGenerator::GetNextKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::SequentialIDGenerator*>(),
                        {"GetNextKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Tables::SequentialIDGenerator* UnityEngine::Localization::Tables::SequentialIDGenerator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Tables::SequentialIDGenerator*>());
}
inline ::UnityEngine::Localization::Tables::SequentialIDGenerator* UnityEngine::Localization::Tables::SequentialIDGenerator::New_ctor(int64_t  startingId)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Tables::SequentialIDGenerator*>(startingId));
}
/// @brief Convert operator to "::UnityEngine::Localization::Tables::IKeyGenerator"
constexpr  UnityEngine::Localization::Tables::SequentialIDGenerator::operator ::UnityEngine::Localization::Tables::IKeyGenerator*() noexcept {
return static_cast<::UnityEngine::Localization::Tables::IKeyGenerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::Tables::IKeyGenerator"
constexpr ::UnityEngine::Localization::Tables::IKeyGenerator* UnityEngine::Localization::Tables::SequentialIDGenerator::i___UnityEngine__Localization__Tables__IKeyGenerator() noexcept {
return static_cast<::UnityEngine::Localization::Tables::IKeyGenerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Tables::SequentialIDGenerator::SequentialIDGenerator()   {
}
