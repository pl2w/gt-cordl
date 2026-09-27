#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/KdTree/ITypeMath_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ITypeMath_1)
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree {
template<typename T>
class ITypeMath_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::ProBuilder::KdTree::ITypeMath_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::ProBuilder::KdTree::ITypeMath_1, "UnityEngine.ProBuilder.KdTree", "ITypeMath`1");
// Dependencies 
namespace UnityEngine::ProBuilder::KdTree {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.ProBuilder.KdTree.ITypeMath`1<T>
class CORDL_TYPE ITypeMath_1 {
public:
// Declarations
 __declspec(property(get=get_MinValue)) T  MinValue;

 __declspec(property(get=get_NegativeInfinity)) T  NegativeInfinity;

 __declspec(property(get=get_PositiveInfinity)) T  PositiveInfinity;

/// @brief Method AreEqual, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool AreEqual(::ArrayW<T>  a, ::ArrayW<T>  b) ;

/// @brief Method Compare, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t Compare(T  a, T  b) ;

/// @brief Method DistanceSquaredBetweenPoints, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline T DistanceSquaredBetweenPoints(::ArrayW<T>  a, ::ArrayW<T>  b) ;

/// @brief Method Multiply, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline T Multiply(T  a, T  b) ;

/// @brief Method get_MinValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline T get_MinValue() ;

/// @brief Method get_NegativeInfinity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline T get_NegativeInfinity() ;

/// @brief Method get_PositiveInfinity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline T get_PositiveInfinity() ;

// Ctor Parameters [CppParam { name: "", ty: "ITypeMath_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITypeMath_1(ITypeMath_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32881};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
