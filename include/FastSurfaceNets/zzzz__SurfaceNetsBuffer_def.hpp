#pragma once
// IWYU pragma private; include "FastSurfaceNets/SurfaceNetsBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SurfaceNetsBuffer)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct int3;
}
// Forward declare root types
namespace FastSurfaceNets {
class SurfaceNetsBuffer;
}
// Write type traits
MARK_REF_T(::FastSurfaceNets::SurfaceNetsBuffer*);
DEFINE_IL2CPP_CLASS(::FastSurfaceNets::SurfaceNetsBuffer*, "FastSurfaceNets", "SurfaceNetsBuffer");
// Dependencies System.Object
namespace FastSurfaceNets {
// Is value type: false
// CS Name: FastSurfaceNets.SurfaceNetsBuffer
class CORDL_TYPE SurfaceNetsBuffer : public ::System::Object {
public:
// Declarations
/// @brief Field Indices, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Indices, put=__cordl_internal_set_Indices)) ::System::Collections::Generic::List_1<int32_t>*  Indices;

/// @brief Field Normals, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Normals, put=__cordl_internal_set_Normals)) ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*  Normals;

/// @brief Field Positions, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Positions, put=__cordl_internal_set_Positions)) ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*  Positions;

/// @brief Field StrideToIndex, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_StrideToIndex, put=__cordl_internal_set_StrideToIndex)) ::ArrayW<int32_t>  StrideToIndex;

/// @brief Field SurfacePoints, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_SurfacePoints, put=__cordl_internal_set_SurfacePoints)) ::System::Collections::Generic::List_1<::Unity::Mathematics::int3>*  SurfacePoints;

/// @brief Field SurfaceStrides, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_SurfaceStrides, put=__cordl_internal_set_SurfaceStrides)) ::System::Collections::Generic::List_1<int32_t>*  SurfaceStrides;

static inline ::FastSurfaceNets::SurfaceNetsBuffer* New_ctor() ;

/// @brief Method Reset, addr 0x5da837c, size 0x12c, virtual false, abstract: false, final false
inline void Reset(int32_t  arraySize) ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_Indices() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_Indices() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>* const& __cordl_internal_get_Normals() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*& __cordl_internal_get_Normals() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>* const& __cordl_internal_get_Positions() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*& __cordl_internal_get_Positions() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_StrideToIndex() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_StrideToIndex() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Mathematics::int3>* const& __cordl_internal_get_SurfacePoints() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Mathematics::int3>*& __cordl_internal_get_SurfacePoints() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_SurfaceStrides() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_SurfaceStrides() ;

constexpr void __cordl_internal_set_Indices(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_Normals(::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*  value) ;

constexpr void __cordl_internal_set_Positions(::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*  value) ;

constexpr void __cordl_internal_set_StrideToIndex(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_SurfacePoints(::System::Collections::Generic::List_1<::Unity::Mathematics::int3>*  value) ;

constexpr void __cordl_internal_set_SurfaceStrides(::System::Collections::Generic::List_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0x5da84a8, size 0x1f0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SurfaceNetsBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SurfaceNetsBuffer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SurfaceNetsBuffer(SurfaceNetsBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SurfaceNetsBuffer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SurfaceNetsBuffer(SurfaceNetsBuffer const& ) = delete;

/// @brief Field NullVertex offset 0xffffffff size 0x4
static constexpr int32_t  NullVertex{static_cast<int32_t>(0x7fffffff)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4994};

/// @brief Field Positions, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*  ___Positions;

/// @brief Field Normals, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*  ___Normals;

/// @brief Field Indices, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___Indices;

/// @brief Field SurfacePoints, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Mathematics::int3>*  ___SurfacePoints;

/// @brief Field SurfaceStrides, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___SurfaceStrides;

/// @brief Field StrideToIndex, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___StrideToIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::FastSurfaceNets::SurfaceNetsBuffer, ___Positions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::SurfaceNetsBuffer, ___Normals) == 0x18, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::SurfaceNetsBuffer, ___Indices) == 0x20, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::SurfaceNetsBuffer, ___SurfacePoints) == 0x28, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::SurfaceNetsBuffer, ___SurfaceStrides) == 0x30, "Offset mismatch!");

static_assert(offsetof(::FastSurfaceNets::SurfaceNetsBuffer, ___StrideToIndex) == 0x38, "Offset mismatch!");

static_assert(sizeof(::FastSurfaceNets::SurfaceNetsBuffer) == 0x40, "Size mismatch!");

} // namespace end def FastSurfaceNets
