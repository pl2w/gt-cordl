#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/BVHNodeDrawInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BVHNodeDrawInfo)
namespace Fusion::LagCompensation {
struct BVHNode;
}
namespace Fusion::LagCompensation {
class HitboxBuffer;
}
namespace UnityEngine {
struct Bounds;
}
// Forward declare root types
namespace Fusion::LagCompensation {
class BVHNodeDrawInfo;
}
// Write type traits
MARK_REF_T(::Fusion::LagCompensation::BVHNodeDrawInfo*);
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::BVHNodeDrawInfo*, "Fusion.LagCompensation", "BVHNodeDrawInfo");
// Dependencies System.Object
namespace Fusion::LagCompensation {
// Is value type: false
// CS Name: Fusion.LagCompensation.BVHNodeDrawInfo
class CORDL_TYPE BVHNodeDrawInfo : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Bounds)) ::UnityEngine::Bounds  Bounds;

/// @brief Field Buffer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Buffer, put=__cordl_internal_set_Buffer)) ::Fusion::LagCompensation::HitboxBuffer*  Buffer;

 __declspec(property(get=get_Depth)) int32_t  Depth;

 __declspec(property(get=get_MaxDepth)) int32_t  MaxDepth;

/// @brief Field NodeIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_NodeIndex, put=__cordl_internal_set_NodeIndex)) int32_t  NodeIndex;

/// @brief Method FromBVHNode, addr 0x6017844, size 0x68, virtual false, abstract: false, final false
inline ::Fusion::LagCompensation::BVHNodeDrawInfo* FromBVHNode(::by_ref<::Fusion::LagCompensation::BVHNode>  node) ;

static inline ::Fusion::LagCompensation::BVHNodeDrawInfo* New_ctor(::Fusion::LagCompensation::HitboxBuffer*  buffer) ;

constexpr ::Fusion::LagCompensation::HitboxBuffer* const& __cordl_internal_get_Buffer() const;

constexpr ::Fusion::LagCompensation::HitboxBuffer*& __cordl_internal_get_Buffer() ;

constexpr int32_t const& __cordl_internal_get_NodeIndex() const;

constexpr int32_t& __cordl_internal_get_NodeIndex() ;

constexpr void __cordl_internal_set_Buffer(::Fusion::LagCompensation::HitboxBuffer*  value) ;

constexpr void __cordl_internal_set_NodeIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x6017698, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Fusion::LagCompensation::HitboxBuffer*  buffer) ;

/// @brief Method get_Bounds, addr 0x60176c8, size 0x64, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds get_Bounds() ;

/// @brief Method get_Depth, addr 0x60177d4, size 0x4c, virtual false, abstract: false, final false
inline int32_t get_Depth() ;

/// @brief Method get_MaxDepth, addr 0x6017820, size 0x24, virtual false, abstract: false, final false
inline int32_t get_MaxDepth() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BVHNodeDrawInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BVHNodeDrawInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BVHNodeDrawInfo(BVHNodeDrawInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BVHNodeDrawInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BVHNodeDrawInfo(BVHNodeDrawInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19400};

/// @brief Field Buffer, offset: 0x10, size: 0x8, def value: None
 ::Fusion::LagCompensation::HitboxBuffer*  ___Buffer;

/// @brief Field NodeIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ___NodeIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::LagCompensation::BVHNodeDrawInfo, ___Buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BVHNodeDrawInfo, ___NodeIndex) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::LagCompensation::BVHNodeDrawInfo) == 0x20, "Size mismatch!");

} // namespace end def Fusion::LagCompensation
