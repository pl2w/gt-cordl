#pragma once
// IWYU pragma private; include "FastSurfaceNets/SurfaceNetsBuffer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "FastSurfaceNets/zzzz__SurfaceNetsBuffer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__int3_def.hpp"
//  Writing Method size for method: ::FastSurfaceNets::SurfaceNetsBuffer.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::FastSurfaceNets::SurfaceNetsBuffer::*)(int32_t)>(&::FastSurfaceNets::SurfaceNetsBuffer::Reset)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5da837c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNetsBuffer*>(),
                        {"Reset", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::FastSurfaceNets::SurfaceNetsBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::FastSurfaceNets::SurfaceNetsBuffer::*)()>(&::FastSurfaceNets::SurfaceNetsBuffer::_ctor)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5da84a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNetsBuffer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*& FastSurfaceNets::SurfaceNetsBuffer::__cordl_internal_get_Positions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Positions;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>* const& FastSurfaceNets::SurfaceNetsBuffer::__cordl_internal_get_Positions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Positions;
}
constexpr void FastSurfaceNets::SurfaceNetsBuffer::__cordl_internal_set_Positions(::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Positions = value;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*& FastSurfaceNets::SurfaceNetsBuffer::__cordl_internal_get_Normals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Normals;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>* const& FastSurfaceNets::SurfaceNetsBuffer::__cordl_internal_get_Normals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Normals;
}
constexpr void FastSurfaceNets::SurfaceNetsBuffer::__cordl_internal_set_Normals(::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Normals = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& FastSurfaceNets::SurfaceNetsBuffer::__cordl_internal_get_Indices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Indices;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& FastSurfaceNets::SurfaceNetsBuffer::__cordl_internal_get_Indices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Indices;
}
constexpr void FastSurfaceNets::SurfaceNetsBuffer::__cordl_internal_set_Indices(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Indices = value;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Mathematics::int3>*& FastSurfaceNets::SurfaceNetsBuffer::__cordl_internal_get_SurfacePoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SurfacePoints;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Mathematics::int3>* const& FastSurfaceNets::SurfaceNetsBuffer::__cordl_internal_get_SurfacePoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SurfacePoints;
}
constexpr void FastSurfaceNets::SurfaceNetsBuffer::__cordl_internal_set_SurfacePoints(::System::Collections::Generic::List_1<::Unity::Mathematics::int3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SurfacePoints = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& FastSurfaceNets::SurfaceNetsBuffer::__cordl_internal_get_SurfaceStrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SurfaceStrides;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& FastSurfaceNets::SurfaceNetsBuffer::__cordl_internal_get_SurfaceStrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SurfaceStrides;
}
constexpr void FastSurfaceNets::SurfaceNetsBuffer::__cordl_internal_set_SurfaceStrides(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SurfaceStrides = value;
}
constexpr ::ArrayW<int32_t>& FastSurfaceNets::SurfaceNetsBuffer::__cordl_internal_get_StrideToIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StrideToIndex;
}
constexpr ::ArrayW<int32_t> const& FastSurfaceNets::SurfaceNetsBuffer::__cordl_internal_get_StrideToIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StrideToIndex;
}
constexpr void FastSurfaceNets::SurfaceNetsBuffer::__cordl_internal_set_StrideToIndex(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StrideToIndex = value;
}
inline void FastSurfaceNets::SurfaceNetsBuffer::Reset(int32_t  arraySize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNetsBuffer*>(),
                        {"Reset", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arraySize);
}
inline void FastSurfaceNets::SurfaceNetsBuffer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::FastSurfaceNets::SurfaceNetsBuffer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::FastSurfaceNets::SurfaceNetsBuffer* FastSurfaceNets::SurfaceNetsBuffer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::FastSurfaceNets::SurfaceNetsBuffer*>());
}
// Ctor Parameters []
constexpr ::FastSurfaceNets::SurfaceNetsBuffer::SurfaceNetsBuffer()   {
}
