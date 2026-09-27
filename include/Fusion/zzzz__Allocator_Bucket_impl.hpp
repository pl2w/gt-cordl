#pragma once
// IWYU pragma private; include "Fusion/Allocator_Bucket.hpp"
#include "Fusion/zzzz__Allocator_Bucket_def.hpp"
#include "Fusion/zzzz__Allocator_Config_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Allocator_Bucket._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Allocator_Bucket::*)(int32_t, int32_t, int32_t, int32_t)>(&::GlobalNamespace::Allocator_Bucket::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f6f710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_Bucket>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Allocator_Bucket.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Allocator_Bucket (*)(int32_t, int32_t, ::GlobalNamespace::Allocator_Config)>(&::GlobalNamespace::Allocator_Bucket::Create)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f6ede4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_Bucket>(),
                        {"Create", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::Allocator_Config>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Allocator_Bucket.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::Allocator_Bucket::*)()>(&::GlobalNamespace::Allocator_Bucket::ToString)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5f6f71c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Allocator_Bucket>(),
                    {::i2c::class_of<::GlobalNamespace::Allocator_Bucket>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::Allocator_Bucket::__cordl_internal_get_Index()  {
return this->___Index;
}
constexpr int32_t const& GlobalNamespace::Allocator_Bucket::__cordl_internal_get_Index() const {
return this->___Index;
}
constexpr void GlobalNamespace::Allocator_Bucket::__cordl_internal_set_Index(int32_t  value)  {
this->___Index = value;
}
constexpr int32_t& GlobalNamespace::Allocator_Bucket::__cordl_internal_get_SegmentStride()  {
return this->___SegmentStride;
}
constexpr int32_t const& GlobalNamespace::Allocator_Bucket::__cordl_internal_get_SegmentStride() const {
return this->___SegmentStride;
}
constexpr void GlobalNamespace::Allocator_Bucket::__cordl_internal_set_SegmentStride(int32_t  value)  {
this->___SegmentStride = value;
}
constexpr int32_t& GlobalNamespace::Allocator_Bucket::__cordl_internal_get_SegmentWordCount()  {
return this->___SegmentWordCount;
}
constexpr int32_t const& GlobalNamespace::Allocator_Bucket::__cordl_internal_get_SegmentWordCount() const {
return this->___SegmentWordCount;
}
constexpr void GlobalNamespace::Allocator_Bucket::__cordl_internal_set_SegmentWordCount(int32_t  value)  {
this->___SegmentWordCount = value;
}
constexpr int32_t& GlobalNamespace::Allocator_Bucket::__cordl_internal_get_SegmentCapacity()  {
return this->___SegmentCapacity;
}
constexpr int32_t const& GlobalNamespace::Allocator_Bucket::__cordl_internal_get_SegmentCapacity() const {
return this->___SegmentCapacity;
}
constexpr void GlobalNamespace::Allocator_Bucket::__cordl_internal_set_SegmentCapacity(int32_t  value)  {
this->___SegmentCapacity = value;
}
inline void GlobalNamespace::Allocator_Bucket::_ctor(int32_t  index, int32_t  stride, int32_t  wordCount, int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_Bucket>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, stride, wordCount, capacity);
}
inline ::GlobalNamespace::Allocator_Bucket GlobalNamespace::Allocator_Bucket::Create(int32_t  index, int32_t  wordCount, ::GlobalNamespace::Allocator_Config  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_Bucket>(),
                        {"Create", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::Allocator_Config>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Allocator_Bucket>(nullptr, ___internal_method, index, wordCount, config);
}
inline ::StringW GlobalNamespace::Allocator_Bucket::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Allocator_Bucket>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SegmentStride", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SegmentWordCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SegmentCapacity", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Allocator_Bucket::Allocator_Bucket(int32_t  Index, int32_t  SegmentStride, int32_t  SegmentWordCount, int32_t  SegmentCapacity) noexcept  {
this->Index = Index;
this->SegmentStride = SegmentStride;
this->SegmentWordCount = SegmentWordCount;
this->SegmentCapacity = SegmentCapacity;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Allocator_Bucket::Allocator_Bucket()   {
}
