#pragma once
// IWYU pragma private; include "GlobalNamespace/BundleList.hpp"
#include "GlobalNamespace/zzzz__BundleData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BundleList_def.hpp"
#include "GlobalNamespace/zzzz__BundleData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BundleList.FromJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BundleList::*)(::StringW)>(&::GlobalNamespace::BundleList::FromJson)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x574bb04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BundleList*>(),
                        {"FromJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BundleList.get_IsLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BundleList::*)()>(&::GlobalNamespace::BundleList::get_IsLoaded)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x574bd24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BundleList*>(),
                        {"get_IsLoaded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BundleList.HasMothershipRewards
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BundleList::*)(::StringW)>(&::GlobalNamespace::BundleList::HasMothershipRewards)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x574bd34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BundleList*>(),
                        {"HasMothershipRewards", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BundleList.HasSku
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BundleList::*)(::StringW, ::by_ref<int32_t>)>(&::GlobalNamespace::BundleList::HasSku)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x574be04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BundleList*>(),
                        {"HasSku", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BundleList.TryGetBundle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BundleList::*)(::StringW, ::by_ref<::GlobalNamespace::BundleData>)>(&::GlobalNamespace::BundleList::TryGetBundle)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x574be90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BundleList*>(),
                        {"TryGetBundle", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BundleData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BundleList.ActiveBundle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BundleData (::GlobalNamespace::BundleList::*)()>(&::GlobalNamespace::BundleList::ActiveBundle)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x574bfcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BundleList*>(),
                        {"ActiveBundle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BundleList._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BundleList::*)()>(&::GlobalNamespace::BundleList::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x574c00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BundleList*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BundleList::__cordl_internal_get_activeBundleIdx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeBundleIdx;
}
constexpr int32_t const& GlobalNamespace::BundleList::__cordl_internal_get_activeBundleIdx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeBundleIdx;
}
constexpr void GlobalNamespace::BundleList::__cordl_internal_set_activeBundleIdx(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeBundleIdx = value;
}
constexpr ::ArrayW<::GlobalNamespace::BundleData>& GlobalNamespace::BundleList::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::ArrayW<::GlobalNamespace::BundleData> const& GlobalNamespace::BundleList::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::BundleList::__cordl_internal_set_data(::ArrayW<::GlobalNamespace::BundleData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
inline void GlobalNamespace::BundleList::FromJson(::StringW  jsonString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BundleList*>(),
                        {"FromJson", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jsonString);
}
inline bool GlobalNamespace::BundleList::get_IsLoaded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BundleList*>(),
                        {"get_IsLoaded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::BundleList::HasMothershipRewards(::StringW  playFabItemName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BundleList*>(),
                        {"HasMothershipRewards", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playFabItemName);
}
inline bool GlobalNamespace::BundleList::HasSku(::StringW  skuName, ::by_ref<int32_t>  idx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BundleList*>(),
                        {"HasSku", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, skuName, idx);
}
inline bool GlobalNamespace::BundleList::TryGetBundle(::StringW  idOrSku, ::by_ref<::GlobalNamespace::BundleData>  bundle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BundleList*>(),
                        {"TryGetBundle", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BundleData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, idOrSku, bundle);
}
inline ::GlobalNamespace::BundleData GlobalNamespace::BundleList::ActiveBundle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BundleList*>(),
                        {"ActiveBundle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BundleData>(this, ___internal_method);
}
inline void GlobalNamespace::BundleList::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BundleList*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BundleList* GlobalNamespace::BundleList::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BundleList*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BundleList::BundleList()   {
}
