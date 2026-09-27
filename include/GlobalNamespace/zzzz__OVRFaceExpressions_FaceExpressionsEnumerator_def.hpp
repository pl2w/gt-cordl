#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRFaceExpressions_FaceExpressionsEnumerator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRFaceExpressions_FaceExpressionsEnumerator)
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRFaceExpressions_FaceExpressionsEnumerator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator, "", "OVRFaceExpressions/FaceExpressionsEnumerator");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRFaceExpressions/FaceExpressionsEnumerator
struct CORDL_TYPE OVRFaceExpressions_FaceExpressionsEnumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) float_t  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<float_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<float_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xa585f40, size 0x4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0xa585ebc, size 0x1c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method Reset, addr 0xa585f34, size 0xc, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xa585f0c, size 0x28, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method .ctor, addr 0xa585da4, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<float_t>  array) ;

/// @brief Method get_Current, addr 0xa585ed8, size 0x34, virtual true, abstract: false, final true
inline float_t get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<float_t>"
constexpr ::System::Collections::Generic::IEnumerator_1<float_t>* i___System__Collections__Generic__IEnumerator_1_float_t_() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRFaceExpressions_FaceExpressionsEnumerator() ;

// Ctor Parameters [CppParam { name: "_faceExpressions", ty: "::ArrayW<float_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRFaceExpressions_FaceExpressionsEnumerator(::ArrayW<float_t>  _faceExpressions, int32_t  _index, int32_t  _count) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11890};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _faceExpressions, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<float_t>  _faceExpressions;

/// @brief Field _index, offset: 0x8, size: 0x4, def value: None
 int32_t  _index;

/// @brief Field _count, offset: 0xc, size: 0x4, def value: None
 int32_t  _count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator, _faceExpressions) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator, _index) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator, _count) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRFaceExpressions_FaceExpressionsEnumerator) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
