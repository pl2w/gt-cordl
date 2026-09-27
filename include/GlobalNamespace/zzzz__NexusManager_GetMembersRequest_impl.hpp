#pragma once
// IWYU pragma private; include "GlobalNamespace/NexusManager_GetMembersRequest.hpp"
#include "GlobalNamespace/zzzz__NexusManager_GetMembersRequest_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NexusManager_GetMembersRequest.get_page
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NexusManager_GetMembersRequest::*)()>(&::GlobalNamespace::NexusManager_GetMembersRequest::get_page)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57773f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusManager_GetMembersRequest>(),
                        {"get_page", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NexusManager_GetMembersRequest.set_page
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NexusManager_GetMembersRequest::*)(int32_t)>(&::GlobalNamespace::NexusManager_GetMembersRequest::set_page)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5777400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusManager_GetMembersRequest>(),
                        {"set_page", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NexusManager_GetMembersRequest.get_pageSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NexusManager_GetMembersRequest::*)()>(&::GlobalNamespace::NexusManager_GetMembersRequest::get_pageSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5777408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusManager_GetMembersRequest>(),
                        {"get_pageSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NexusManager_GetMembersRequest.set_pageSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NexusManager_GetMembersRequest::*)(int32_t)>(&::GlobalNamespace::NexusManager_GetMembersRequest::set_pageSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5777410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusManager_GetMembersRequest>(),
                        {"set_pageSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::NexusManager_GetMembersRequest::get_page()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusManager_GetMembersRequest>(),
                        {"get_page", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::NexusManager_GetMembersRequest::set_page(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusManager_GetMembersRequest>(),
                        {"set_page", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t GlobalNamespace::NexusManager_GetMembersRequest::get_pageSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusManager_GetMembersRequest>(),
                        {"get_pageSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::NexusManager_GetMembersRequest::set_pageSize(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusManager_GetMembersRequest>(),
                        {"set_pageSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_page_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_pageSize_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NexusManager_GetMembersRequest::NexusManager_GetMembersRequest(int32_t  _page_k__BackingField, int32_t  _pageSize_k__BackingField) noexcept  {
this->_page_k__BackingField = _page_k__BackingField;
this->_pageSize_k__BackingField = _pageSize_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NexusManager_GetMembersRequest::NexusManager_GetMembersRequest()   {
}
