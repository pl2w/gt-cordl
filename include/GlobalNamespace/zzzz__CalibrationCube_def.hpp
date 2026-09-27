#pragma once
// IWYU pragma private; include "GlobalNamespace/CalibrationCube.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CalibrationCube)
namespace GlobalNamespace {
class PrimaryButtonWatcher;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class CalibrationCube;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CalibrationCube*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CalibrationCube*, "", "CalibrationCube");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CalibrationCube
class CORDL_TYPE CalibrationCube : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field baseLength, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_baseLength, put=__cordl_internal_set_baseLength)) float_t  baseLength;

/// @brief Field calibratedLength, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_calibratedLength, put=__cordl_internal_set_calibratedLength)) float_t  calibratedLength;

/// @brief Field calibrationPresets, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_calibrationPresets, put=__cordl_internal_set_calibrationPresets)) ::ArrayW<::StringW>  calibrationPresets;

/// @brief Field calibrationPresetsTest, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_calibrationPresetsTest, put=__cordl_internal_set_calibrationPresetsTest)) ::ArrayW<::StringW>  calibrationPresetsTest;

/// @brief Field calibrationPresetsTest2, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_calibrationPresetsTest2, put=__cordl_internal_set_calibrationPresetsTest2)) ::ArrayW<::StringW>  calibrationPresetsTest2;

/// @brief Field calibrationPresetsTest3, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_calibrationPresetsTest3, put=__cordl_internal_set_calibrationPresetsTest3)) ::ArrayW<::StringW>  calibrationPresetsTest3;

/// @brief Field calibrationPresetsTest4, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_calibrationPresetsTest4, put=__cordl_internal_set_calibrationPresetsTest4)) ::ArrayW<::StringW>  calibrationPresetsTest4;

/// @brief Field lastCalibratedLength, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastCalibratedLength, put=__cordl_internal_set_lastCalibratedLength)) float_t  lastCalibratedLength;

/// @brief Field leftController, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftController, put=__cordl_internal_set_leftController)) ::UnityW<::UnityEngine::GameObject>  leftController;

/// @brief Field maxLength, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxLength, put=__cordl_internal_set_maxLength)) float_t  maxLength;

/// @brief Field minLength, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_minLength, put=__cordl_internal_set_minLength)) float_t  minLength;

/// @brief Field outputstring, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_outputstring, put=__cordl_internal_set_outputstring)) ::StringW  outputstring;

/// @brief Field playerBody, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerBody, put=__cordl_internal_set_playerBody)) ::UnityW<::UnityEngine::GameObject>  playerBody;

/// @brief Field rightController, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightController, put=__cordl_internal_set_rightController)) ::UnityW<::UnityEngine::GameObject>  rightController;

/// @brief Field stringList, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_stringList, put=__cordl_internal_set_stringList)) ::System::Collections::Generic::List_1<::StringW>*  stringList;

/// @brief Field watcher, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_watcher, put=__cordl_internal_set_watcher)) ::UnityW<::GlobalNamespace::PrimaryButtonWatcher>  watcher;

/// @brief Method Awake, addr 0x5745404, size 0xc, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::CalibrationCube* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x5745b28, size 0x4, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  collision) ;

/// @brief Method OnCollisionExit, addr 0x5745490, size 0x20c, virtual false, abstract: false, final false
inline void OnCollisionExit(::UnityEngine::Collision*  collision) ;

/// @brief Method OnTriggerEnter, addr 0x574569c, size 0x4, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x57456a0, size 0x4, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method RecalibrateSize, addr 0x57456a4, size 0x30c, virtual false, abstract: false, final false
inline void RecalibrateSize(bool  pressed) ;

/// @brief Method Start, addr 0x5745410, size 0x80, virtual false, abstract: false, final false
inline void Start() ;

constexpr float_t const& __cordl_internal_get_baseLength() const;

constexpr float_t& __cordl_internal_get_baseLength() ;

constexpr float_t const& __cordl_internal_get_calibratedLength() const;

constexpr float_t& __cordl_internal_get_calibratedLength() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_calibrationPresets() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_calibrationPresets() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_calibrationPresetsTest() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_calibrationPresetsTest() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_calibrationPresetsTest2() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_calibrationPresetsTest2() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_calibrationPresetsTest3() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_calibrationPresetsTest3() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_calibrationPresetsTest4() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_calibrationPresetsTest4() ;

constexpr float_t const& __cordl_internal_get_lastCalibratedLength() const;

constexpr float_t& __cordl_internal_get_lastCalibratedLength() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_leftController() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_leftController() ;

constexpr float_t const& __cordl_internal_get_maxLength() const;

constexpr float_t& __cordl_internal_get_maxLength() ;

constexpr float_t const& __cordl_internal_get_minLength() const;

constexpr float_t& __cordl_internal_get_minLength() ;

constexpr ::StringW const& __cordl_internal_get_outputstring() const;

constexpr ::StringW& __cordl_internal_get_outputstring() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_playerBody() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_playerBody() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_rightController() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_rightController() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_stringList() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_stringList() ;

constexpr ::UnityW<::GlobalNamespace::PrimaryButtonWatcher> const& __cordl_internal_get_watcher() const;

constexpr ::UnityW<::GlobalNamespace::PrimaryButtonWatcher>& __cordl_internal_get_watcher() ;

constexpr void __cordl_internal_set_baseLength(float_t  value) ;

constexpr void __cordl_internal_set_calibratedLength(float_t  value) ;

constexpr void __cordl_internal_set_calibrationPresets(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_calibrationPresetsTest(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_calibrationPresetsTest2(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_calibrationPresetsTest3(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_calibrationPresetsTest4(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_lastCalibratedLength(float_t  value) ;

constexpr void __cordl_internal_set_leftController(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_maxLength(float_t  value) ;

constexpr void __cordl_internal_set_minLength(float_t  value) ;

constexpr void __cordl_internal_set_outputstring(::StringW  value) ;

constexpr void __cordl_internal_set_playerBody(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_rightController(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_stringList(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_watcher(::UnityW<::GlobalNamespace::PrimaryButtonWatcher>  value) ;

/// @brief Method .ctor, addr 0x5745b2c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CalibrationCube() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CalibrationCube", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CalibrationCube(CalibrationCube && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CalibrationCube", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CalibrationCube(CalibrationCube const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1265};

/// @brief Field watcher, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PrimaryButtonWatcher>  ___watcher;

/// @brief Field rightController, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___rightController;

/// @brief Field leftController, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___leftController;

/// @brief Field playerBody, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___playerBody;

/// @brief Field calibratedLength, offset: 0x40, size: 0x4, def value: None
 float_t  ___calibratedLength;

/// @brief Field lastCalibratedLength, offset: 0x44, size: 0x4, def value: None
 float_t  ___lastCalibratedLength;

/// @brief Field minLength, offset: 0x48, size: 0x4, def value: None
 float_t  ___minLength;

/// @brief Field maxLength, offset: 0x4c, size: 0x4, def value: None
 float_t  ___maxLength;

/// @brief Field baseLength, offset: 0x50, size: 0x4, def value: None
 float_t  ___baseLength;

/// @brief Field calibrationPresets, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___calibrationPresets;

/// @brief Field calibrationPresetsTest, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___calibrationPresetsTest;

/// @brief Field calibrationPresetsTest2, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___calibrationPresetsTest2;

/// @brief Field calibrationPresetsTest3, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___calibrationPresetsTest3;

/// @brief Field calibrationPresetsTest4, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___calibrationPresetsTest4;

/// @brief Field outputstring, offset: 0x80, size: 0x8, def value: None
 ::StringW  ___outputstring;

/// @brief Field stringList, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___stringList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CalibrationCube, ___watcher) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CalibrationCube, ___rightController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CalibrationCube, ___leftController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CalibrationCube, ___playerBody) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CalibrationCube, ___calibratedLength) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CalibrationCube, ___lastCalibratedLength) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CalibrationCube, ___minLength) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CalibrationCube, ___maxLength) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CalibrationCube, ___baseLength) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CalibrationCube, ___calibrationPresets) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CalibrationCube, ___calibrationPresetsTest) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CalibrationCube, ___calibrationPresetsTest2) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CalibrationCube, ___calibrationPresetsTest3) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CalibrationCube, ___calibrationPresetsTest4) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CalibrationCube, ___outputstring) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CalibrationCube, ___stringList) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CalibrationCube) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
