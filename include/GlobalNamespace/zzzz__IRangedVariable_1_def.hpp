#pragma once
// IWYU pragma private; include "GlobalNamespace/IRangedVariable_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IRangedVariable_1)
namespace GlobalNamespace {
template<typename T>
class IVariable_1;
}
namespace GlobalNamespace {
class IVariable;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class IRangedVariable_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::IRangedVariable_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::IRangedVariable_1, "", "IRangedVariable`1");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: IRangedVariable`1<T>
class CORDL_TYPE IRangedVariable_1 {
public:
// Declarations
 __declspec(property(get=get_Curve)) ::UnityEngine::AnimationCurve*  Curve;

 __declspec(property(get=get_Max, put=set_Max)) T  Max;

 __declspec(property(get=get_Min, put=set_Min)) T  Min;

 __declspec(property(get=get_Range)) T  Range;

/// @brief Convert operator to "::GlobalNamespace::IVariable"
constexpr operator  ::GlobalNamespace::IVariable*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IVariable_1<T>"
constexpr operator  ::GlobalNamespace::IVariable_1<T>*() noexcept;

/// @brief Method get_Curve, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::AnimationCurve* get_Curve() ;

/// @brief Method get_Max, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline T get_Max() ;

/// @brief Method get_Min, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline T get_Min() ;

/// @brief Method get_Range, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline T get_Range() ;

/// @brief Convert to "::GlobalNamespace::IVariable"
constexpr ::GlobalNamespace::IVariable* i___GlobalNamespace__IVariable() noexcept;

/// @brief Convert to "::GlobalNamespace::IVariable_1<T>"
constexpr ::GlobalNamespace::IVariable_1<T>* i___GlobalNamespace__IVariable_1_T_() noexcept;

/// @brief Method set_Max, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_Max(T  value) ;

/// @brief Method set_Min, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_Min(T  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IRangedVariable_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IRangedVariable_1(IRangedVariable_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2320};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
