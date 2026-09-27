#pragma once
// IWYU pragma private; include "UnityEngine/Splines/IDataPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IDataPoint)
// Forward declare root types
namespace UnityEngine::Splines {
class IDataPoint;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::IDataPoint*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::IDataPoint*, "UnityEngine.Splines", "IDataPoint");
// Dependencies 
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.IDataPoint
class CORDL_TYPE IDataPoint {
public:
// Declarations
 __declspec(property(get=get_Index, put=set_Index)) float_t  Index;

/// @brief Method get_Index, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_Index() ;

/// @brief Method set_Index, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_Index(float_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IDataPoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDataPoint(IDataPoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27922};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Splines
