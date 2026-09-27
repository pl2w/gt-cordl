#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineTouchInputMapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineTouchInputMapper)
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineTouchInputMapper;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineTouchInputMapper*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineTouchInputMapper*, "Unity.Cinemachine", "CinemachineTouchInputMapper");
// [Obsolete]
// [AddComponentMenu("")]
// Dependencies UnityEngine.MonoBehaviour
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineTouchInputMapper
class CORDL_TYPE CinemachineTouchInputMapper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field TouchSensitivityX, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_TouchSensitivityX, put=__cordl_internal_set_TouchSensitivityX)) float_t  TouchSensitivityX;

/// @brief Field TouchSensitivityY, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_TouchSensitivityY, put=__cordl_internal_set_TouchSensitivityY)) float_t  TouchSensitivityY;

/// @brief Field TouchXInputMapTo, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_TouchXInputMapTo, put=__cordl_internal_set_TouchXInputMapTo)) ::StringW  TouchXInputMapTo;

/// @brief Field TouchYInputMapTo, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_TouchYInputMapTo, put=__cordl_internal_set_TouchYInputMapTo)) ::StringW  TouchYInputMapTo;

/// @brief Method GetInputAxis, addr 0xaeda198, size 0xc4, virtual false, abstract: false, final false
inline float_t GetInputAxis(::StringW  axisName) ;

static inline ::Unity::Cinemachine::CinemachineTouchInputMapper* New_ctor() ;

/// @brief Method Start, addr 0xaeda0ec, size 0xac, virtual false, abstract: false, final false
inline void Start() ;

constexpr float_t const& __cordl_internal_get_TouchSensitivityX() const;

constexpr float_t& __cordl_internal_get_TouchSensitivityX() ;

constexpr float_t const& __cordl_internal_get_TouchSensitivityY() const;

constexpr float_t& __cordl_internal_get_TouchSensitivityY() ;

constexpr ::StringW const& __cordl_internal_get_TouchXInputMapTo() const;

constexpr ::StringW& __cordl_internal_get_TouchXInputMapTo() ;

constexpr ::StringW const& __cordl_internal_get_TouchYInputMapTo() const;

constexpr ::StringW& __cordl_internal_get_TouchYInputMapTo() ;

constexpr void __cordl_internal_set_TouchSensitivityX(float_t  value) ;

constexpr void __cordl_internal_set_TouchSensitivityY(float_t  value) ;

constexpr void __cordl_internal_set_TouchXInputMapTo(::StringW  value) ;

constexpr void __cordl_internal_set_TouchYInputMapTo(::StringW  value) ;

/// @brief Method .ctor, addr 0xaeda25c, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineTouchInputMapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineTouchInputMapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineTouchInputMapper(CinemachineTouchInputMapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineTouchInputMapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineTouchInputMapper(CinemachineTouchInputMapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22440};

/// [Tooltip("Sensitivity multiplier for x-axis")]
/// @brief Field TouchSensitivityX, offset: 0x20, size: 0x4, def value: None
 float_t  ___TouchSensitivityX;

/// [Tooltip("Sensitivity multiplier for y-axis")]
/// @brief Field TouchSensitivityY, offset: 0x24, size: 0x4, def value: None
 float_t  ___TouchSensitivityY;

/// [Tooltip("Input channel to spoof for X axis")]
/// @brief Field TouchXInputMapTo, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___TouchXInputMapTo;

/// [Tooltip("Input channel to spoof for Y axis")]
/// @brief Field TouchYInputMapTo, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___TouchYInputMapTo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineTouchInputMapper, ___TouchSensitivityX) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTouchInputMapper, ___TouchSensitivityY) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTouchInputMapper, ___TouchXInputMapTo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineTouchInputMapper, ___TouchYInputMapTo) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineTouchInputMapper) == 0x38, "Size mismatch!");

} // namespace end def Unity::Cinemachine
