#pragma once
// IWYU pragma private; include "Fusion/FixedFeedback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FixedFeedback)
namespace Fusion {
class IFeedbackController;
}
// Forward declare root types
namespace Fusion {
class FixedFeedback;
}
// Write type traits
MARK_REF_T(::Fusion::FixedFeedback*);
DEFINE_IL2CPP_CLASS(::Fusion::FixedFeedback*, "Fusion", "FixedFeedback");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FixedFeedback
class CORDL_TYPE FixedFeedback : public ::System::Object {
public:
// Declarations
/// @brief Field _deadzoneMax, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__deadzoneMax, put=__cordl_internal_set__deadzoneMax)) double_t  _deadzoneMax;

/// @brief Field _deadzoneMin, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__deadzoneMin, put=__cordl_internal_set__deadzoneMin)) double_t  _deadzoneMin;

/// @brief Field _output, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__output, put=__cordl_internal_set__output)) double_t  _output;

/// @brief Field _outputMax, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__outputMax, put=__cordl_internal_set__outputMax)) double_t  _outputMax;

/// @brief Field _outputMin, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__outputMin, put=__cordl_internal_set__outputMin)) double_t  _outputMin;

/// @brief Convert operator to "::Fusion::IFeedbackController"
constexpr operator  ::Fusion::IFeedbackController*() noexcept;

/// @brief Method Fusion.IFeedbackController.Output, addr 0x600ae74, size 0x8, virtual true, abstract: false, final true
inline double_t Fusion_IFeedbackController_Output() ;

/// @brief Method Fusion.IFeedbackController.Reset, addr 0x600af6c, size 0x8, virtual true, abstract: false, final true
inline void Fusion_IFeedbackController_Reset() ;

/// @brief Method Fusion.IFeedbackController.ResetOutput, addr 0x600af74, size 0x8, virtual true, abstract: false, final true
inline void Fusion_IFeedbackController_ResetOutput() ;

/// @brief Method Fusion.IFeedbackController.Update, addr 0x600ae7c, size 0xf0, virtual true, abstract: false, final true
inline void Fusion_IFeedbackController_Update(double_t  sample, double_t  target, double_t  dt) ;

static inline ::Fusion::FixedFeedback* New_ctor(double_t  outputMin, double_t  outputMax, double_t  deadzoneMin, double_t  deadzoneMax) ;

constexpr double_t const& __cordl_internal_get__deadzoneMax() const;

constexpr double_t& __cordl_internal_get__deadzoneMax() ;

constexpr double_t const& __cordl_internal_get__deadzoneMin() const;

constexpr double_t& __cordl_internal_get__deadzoneMin() ;

constexpr double_t const& __cordl_internal_get__output() const;

constexpr double_t& __cordl_internal_get__output() ;

constexpr double_t const& __cordl_internal_get__outputMax() const;

constexpr double_t& __cordl_internal_get__outputMax() ;

constexpr double_t const& __cordl_internal_get__outputMin() const;

constexpr double_t& __cordl_internal_get__outputMin() ;

constexpr void __cordl_internal_set__deadzoneMax(double_t  value) ;

constexpr void __cordl_internal_set__deadzoneMin(double_t  value) ;

constexpr void __cordl_internal_set__output(double_t  value) ;

constexpr void __cordl_internal_set__outputMax(double_t  value) ;

constexpr void __cordl_internal_set__outputMin(double_t  value) ;

/// @brief Method .ctor, addr 0x600adb4, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(double_t  outputMin, double_t  outputMax, double_t  deadzoneMin, double_t  deadzoneMax) ;

/// @brief Convert to "::Fusion::IFeedbackController"
constexpr ::Fusion::IFeedbackController* i___Fusion__IFeedbackController() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FixedFeedback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FixedFeedback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FixedFeedback(FixedFeedback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FixedFeedback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FixedFeedback(FixedFeedback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19364};

/// @brief Field _outputMin, offset: 0x10, size: 0x8, def value: None
 double_t  ____outputMin;

/// @brief Field _outputMax, offset: 0x18, size: 0x8, def value: None
 double_t  ____outputMax;

/// @brief Field _deadzoneMin, offset: 0x20, size: 0x8, def value: None
 double_t  ____deadzoneMin;

/// @brief Field _deadzoneMax, offset: 0x28, size: 0x8, def value: None
 double_t  ____deadzoneMax;

/// @brief Field _output, offset: 0x30, size: 0x8, def value: None
 double_t  ____output;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::FixedFeedback, ____outputMin) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::FixedFeedback, ____outputMax) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::FixedFeedback, ____deadzoneMin) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::FixedFeedback, ____deadzoneMax) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::FixedFeedback, ____output) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Fusion::FixedFeedback) == 0x38, "Size mismatch!");

} // namespace end def Fusion
