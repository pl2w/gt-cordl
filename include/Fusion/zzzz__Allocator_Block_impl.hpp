#pragma once
// IWYU pragma private; include "Fusion/Allocator_Block.hpp"
#include "Fusion/zzzz__Ptr_impl.hpp"
#include "Fusion/zzzz__Allocator_Block_def.hpp"
#include "Fusion/zzzz__Allocator_def.hpp"
#include "Fusion/zzzz__Ptr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Allocator_Block._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Allocator_Block::*)(int32_t)>(&::GlobalNamespace::Allocator_Block::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f6ee4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_Block>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Allocator_Block.SegmentsFreeCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Allocator_Block::*)(::by_ref<::Fusion::Allocator*>)>(&::GlobalNamespace::Allocator_Block::SegmentsFreeCount)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f6cc84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_Block>(),
                        {"SegmentsFreeCount", {}, {::i2c::type_of<::by_ref<::Fusion::Allocator*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Allocator_Block.SegmentsFreeContains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Allocator_Block::*)(::by_ref<::Fusion::Allocator*>, ::Fusion::Ptr)>(&::GlobalNamespace::Allocator_Block::SegmentsFreeContains)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5f6e6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_Block>(),
                        {"SegmentsFreeContains", {}, {::i2c::type_of<::by_ref<::Fusion::Allocator*>>(), ::i2c::type_of<::Fusion::Ptr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Allocator_Block.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::Allocator_Block::*)()>(&::GlobalNamespace::Allocator_Block::ToString)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5f6db98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Allocator_Block>(),
                    {::i2c::class_of<::GlobalNamespace::Allocator_Block>(), 3}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Allocator_Block::_ctor(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_Block>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
inline int32_t GlobalNamespace::Allocator_Block::SegmentsFreeCount(/* [IsReadOnly] */ ::by_ref<::Fusion::Allocator*>  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_Block>(),
                        {"SegmentsFreeCount", {}, {::i2c::type_of<::by_ref<::Fusion::Allocator*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, a);
}
inline bool GlobalNamespace::Allocator_Block::SegmentsFreeContains(/* [IsReadOnly] */ ::by_ref<::Fusion::Allocator*>  a, ::Fusion::Ptr  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Allocator_Block>(),
                        {"SegmentsFreeContains", {}, {::i2c::type_of<::by_ref<::Fusion::Allocator*>>(), ::i2c::type_of<::Fusion::Ptr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, a, ptr);
}
inline ::StringW GlobalNamespace::Allocator_Block::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::Allocator_Block>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Prev", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Next", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Bucket", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SegmentsFree", ty: "::Fusion::Ptr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SegmentsUsed", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SegmentsAllocated", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Index", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AllocCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Allocator_Block::Allocator_Block(int32_t  Prev, int32_t  Next, int32_t  Bucket, ::Fusion::Ptr  SegmentsFree, int32_t  SegmentsUsed, int32_t  SegmentsAllocated, int32_t  Index, int32_t  AllocCount) noexcept  {
this->Prev = Prev;
this->Next = Next;
this->Bucket = Bucket;
this->SegmentsFree = SegmentsFree;
this->SegmentsUsed = SegmentsUsed;
this->SegmentsAllocated = SegmentsAllocated;
this->Index = Index;
this->AllocCount = AllocCount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Allocator_Block::Allocator_Block()   {
}
