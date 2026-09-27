#pragma once
// IWYU pragma private; include "Backtrace/Unity/Common/MathHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MathHelper)
// Forward declare root types
namespace Backtrace::Unity::Common {
class MathHelper;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Common::MathHelper*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Common::MathHelper*, "Backtrace.Unity.Common", "MathHelper");
// Dependencies System.Object
namespace Backtrace::Unity::Common {
// Is value type: false
// CS Name: Backtrace.Unity.Common.MathHelper
class CORDL_TYPE MathHelper : public ::System::Object {
public:
// Declarations
/// @brief Method Clamp, addr 0x5f26820, size 0x84, virtual false, abstract: false, final false
static inline double_t Clamp(double_t  value, double_t  minimum, double_t  maximum) ;

/// @brief Method Uniform, addr 0x5f268a4, size 0x84, virtual false, abstract: false, final false
static inline double_t Uniform(double_t  minimum, double_t  maximum) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MathHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MathHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MathHelper(MathHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MathHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MathHelper(MathHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27672};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Backtrace::Unity::Common::MathHelper) == 0x10, "Size mismatch!");

} // namespace end def Backtrace::Unity::Common
