#pragma once
// IWYU pragma private; include "GlobalNamespace/WaitUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(WaitUtils)
namespace System::Linq::Expressions {
class ParameterExpression;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class WaitForSeconds;
}
// Forward declare root types
namespace GlobalNamespace {
class WaitUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::WaitUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WaitUtils*, "", "WaitUtils");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: WaitUtils
class CORDL_TYPE WaitUtils : public ::System::Object {
public:
// Declarations
/// @brief Field _param, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__param, put=setStaticF__param)) ::System::Linq::Expressions::ParameterExpression*  _param;

/// @brief Field _waitForSeconds, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__waitForSeconds, put=setStaticF__waitForSeconds)) ::UnityEngine::WaitForSeconds*  _waitForSeconds;

/// @brief Field _waitForSecondsSetter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__waitForSecondsSetter, put=setStaticF__waitForSecondsSetter)) ::System::Action_1<float_t>*  _waitForSecondsSetter;

/// @brief Method WaitForSeconds, addr 0x5b1d65c, size 0x8c, virtual false, abstract: false, final false
static inline ::UnityEngine::WaitForSeconds* WaitForSeconds(float_t  seconds) ;

static inline ::System::Linq::Expressions::ParameterExpression* getStaticF__param() ;

static inline ::UnityEngine::WaitForSeconds* getStaticF__waitForSeconds() ;

static inline ::System::Action_1<float_t>* getStaticF__waitForSecondsSetter() ;

static inline void setStaticF__param(::System::Linq::Expressions::ParameterExpression*  value) ;

static inline void setStaticF__waitForSeconds(::UnityEngine::WaitForSeconds*  value) ;

static inline void setStaticF__waitForSecondsSetter(::System::Action_1<float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaitUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaitUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WaitUtils(WaitUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaitUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaitUtils(WaitUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3587};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::WaitUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
