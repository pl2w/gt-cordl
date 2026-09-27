#pragma once
// IWYU pragma private; include "Fusion/VariableFeedback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VariableFeedback)
namespace Fusion {
class IFeedbackController;
}
// Forward declare root types
namespace Fusion {
class VariableFeedback;
}
// Write type traits
MARK_REF_T(::Fusion::VariableFeedback*);
DEFINE_IL2CPP_CLASS(::Fusion::VariableFeedback*, "Fusion", "VariableFeedback");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.VariableFeedback
class CORDL_TYPE VariableFeedback : public ::System::Object {
public:
// Declarations
/// @brief Field _Kd, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Kd, put=__cordl_internal_set__Kd)) double_t  _Kd;

/// @brief Field _Ki, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Ki, put=__cordl_internal_set__Ki)) double_t  _Ki;

/// @brief Field _Kp, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Kp, put=__cordl_internal_set__Kp)) double_t  _Kp;

/// @brief Field _lastSample, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastSample, put=__cordl_internal_set__lastSample)) double_t  _lastSample;

/// @brief Field _output, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__output, put=__cordl_internal_set__output)) double_t  _output;

/// @brief Field _outputMax, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__outputMax, put=__cordl_internal_set__outputMax)) double_t  _outputMax;

/// @brief Field _outputMin, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__outputMin, put=__cordl_internal_set__outputMin)) double_t  _outputMin;

/// @brief Field _sum, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__sum, put=__cordl_internal_set__sum)) double_t  _sum;

/// @brief Convert operator to "::Fusion::IFeedbackController"
constexpr operator  ::Fusion::IFeedbackController*() noexcept;

/// @brief Method Fusion.IFeedbackController.Output, addr 0x600b208, size 0x8, virtual true, abstract: false, final true
inline double_t Fusion_IFeedbackController_Output() ;

/// @brief Method Fusion.IFeedbackController.Reset, addr 0x600b37c, size 0xc, virtual true, abstract: false, final true
inline void Fusion_IFeedbackController_Reset() ;

/// @brief Method Fusion.IFeedbackController.ResetOutput, addr 0x600b388, size 0x8, virtual true, abstract: false, final true
inline void Fusion_IFeedbackController_ResetOutput() ;

/// @brief Method Fusion.IFeedbackController.Update, addr 0x600b210, size 0x16c, virtual true, abstract: false, final true
inline void Fusion_IFeedbackController_Update(double_t  sample, double_t  target, double_t  dt) ;

static inline ::Fusion::VariableFeedback* New_ctor(double_t  Kp, double_t  Ki, double_t  Kd, double_t  outputMin, double_t  outputMax) ;

constexpr double_t const& __cordl_internal_get__Kd() const;

constexpr double_t& __cordl_internal_get__Kd() ;

constexpr double_t const& __cordl_internal_get__Ki() const;

constexpr double_t& __cordl_internal_get__Ki() ;

constexpr double_t const& __cordl_internal_get__Kp() const;

constexpr double_t& __cordl_internal_get__Kp() ;

constexpr double_t const& __cordl_internal_get__lastSample() const;

constexpr double_t& __cordl_internal_get__lastSample() ;

constexpr double_t const& __cordl_internal_get__output() const;

constexpr double_t& __cordl_internal_get__output() ;

constexpr double_t const& __cordl_internal_get__outputMax() const;

constexpr double_t& __cordl_internal_get__outputMax() ;

constexpr double_t const& __cordl_internal_get__outputMin() const;

constexpr double_t& __cordl_internal_get__outputMin() ;

constexpr double_t const& __cordl_internal_get__sum() const;

constexpr double_t& __cordl_internal_get__sum() ;

constexpr void __cordl_internal_set__Kd(double_t  value) ;

constexpr void __cordl_internal_set__Ki(double_t  value) ;

constexpr void __cordl_internal_set__Kp(double_t  value) ;

constexpr void __cordl_internal_set__lastSample(double_t  value) ;

constexpr void __cordl_internal_set__output(double_t  value) ;

constexpr void __cordl_internal_set__outputMax(double_t  value) ;

constexpr void __cordl_internal_set__outputMin(double_t  value) ;

constexpr void __cordl_internal_set__sum(double_t  value) ;

/// @brief Method .ctor, addr 0x6007008, size 0x144, virtual false, abstract: false, final false
inline void _ctor(double_t  Kp, double_t  Ki, double_t  Kd, double_t  outputMin, double_t  outputMax) ;

/// @brief Convert to "::Fusion::IFeedbackController"
constexpr ::Fusion::IFeedbackController* i___Fusion__IFeedbackController() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VariableFeedback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VariableFeedback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VariableFeedback(VariableFeedback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VariableFeedback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VariableFeedback(VariableFeedback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19372};

/// @brief Field _Kp, offset: 0x10, size: 0x8, def value: None
 double_t  ____Kp;

/// @brief Field _Ki, offset: 0x18, size: 0x8, def value: None
 double_t  ____Ki;

/// @brief Field _Kd, offset: 0x20, size: 0x8, def value: None
 double_t  ____Kd;

/// @brief Field _outputMin, offset: 0x28, size: 0x8, def value: None
 double_t  ____outputMin;

/// @brief Field _outputMax, offset: 0x30, size: 0x8, def value: None
 double_t  ____outputMax;

/// @brief Field _lastSample, offset: 0x38, size: 0x8, def value: None
 double_t  ____lastSample;

/// @brief Field _sum, offset: 0x40, size: 0x8, def value: None
 double_t  ____sum;

/// @brief Field _output, offset: 0x48, size: 0x8, def value: None
 double_t  ____output;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::VariableFeedback, ____Kp) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::VariableFeedback, ____Ki) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::VariableFeedback, ____Kd) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::VariableFeedback, ____outputMin) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::VariableFeedback, ____outputMax) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::VariableFeedback, ____lastSample) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::VariableFeedback, ____sum) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::VariableFeedback, ____output) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Fusion::VariableFeedback) == 0x50, "Size mismatch!");

} // namespace end def Fusion
