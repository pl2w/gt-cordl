#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CachedScaledSpline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Splines/zzzz__NativeSpline_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CachedScaledSpline)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine::Splines {
struct BezierCurve;
}
namespace UnityEngine::Splines {
struct BezierKnot;
}
namespace UnityEngine::Splines {
class ISpline;
}
namespace UnityEngine::Splines {
class Spline;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CachedScaledSpline;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CachedScaledSpline*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CachedScaledSpline*, "Unity.Cinemachine", "CachedScaledSpline");
// [DefaultMember("Item")]
// Dependencies System.Object, UnityEngine.Splines.NativeSpline, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CachedScaledSpline
class CORDL_TYPE CachedScaledSpline : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Closed)) bool  Closed;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) ::UnityEngine::Splines::BezierKnot  Item[];

/// @brief Field m_CachedScale, offset 0x60, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_CachedScale, put=__cordl_internal_set_m_CachedScale)) ::UnityEngine::Vector3  m_CachedScale;

/// @brief Field m_CachedSource, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CachedSource, put=__cordl_internal_set_m_CachedSource)) ::UnityEngine::Splines::Spline*  m_CachedSource;

/// @brief Field m_IsAllocated, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsAllocated, put=__cordl_internal_set_m_IsAllocated)) bool  m_IsAllocated;

/// @brief Field m_NativeSpline, offset 0x10, size 0x48 
 __declspec(property(get=__cordl_internal_get_m_NativeSpline, put=__cordl_internal_set_m_NativeSpline)) ::UnityEngine::Splines::NativeSpline  m_NativeSpline;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::UnityEngine::Splines::ISpline"
constexpr operator  ::UnityEngine::Splines::ISpline*() noexcept;

/// @brief Method Dispose, addr 0xaebe5a4, size 0x28, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetCurve, addr 0xaebea08, size 0x38, virtual true, abstract: false, final true
inline ::UnityEngine::Splines::BezierCurve GetCurve(int32_t  index) ;

/// @brief Method GetCurveInterpolation, addr 0xaebea40, size 0xc, virtual true, abstract: false, final true
inline float_t GetCurveInterpolation(int32_t  curveIndex, float_t  curveDistance) ;

/// @brief Method GetCurveLength, addr 0xaebea4c, size 0xc, virtual true, abstract: false, final true
inline float_t GetCurveLength(int32_t  index) ;

/// @brief Method GetCurveUpVector, addr 0xaebea58, size 0xc, virtual true, abstract: false, final true
inline ::Unity::Mathematics::float3 GetCurveUpVector(int32_t  index, float_t  t) ;

/// @brief Method GetEnumerator, addr 0xaebe9a4, size 0xc, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::BezierKnot>* GetEnumerator() ;

/// @brief Method GetLength, addr 0xaebea64, size 0x8, virtual true, abstract: false, final true
inline float_t GetLength() ;

/// @brief Method IsCrudelyValid, addr 0xaebe2c8, size 0x13c, virtual false, abstract: false, final false
inline bool IsCrudelyValid(::UnityEngine::Splines::Spline*  spline, ::UnityEngine::Transform*  transform) ;

/// @brief Method KnotsAreValid, addr 0xaebe5f4, size 0x3b0, virtual false, abstract: false, final false
inline bool KnotsAreValid(::UnityEngine::Splines::Spline*  spline, ::UnityEngine::Transform*  transform) ;

static inline ::Unity::Cinemachine::CachedScaledSpline* New_ctor(::UnityEngine::Splines::Spline*  spline, ::UnityEngine::Transform*  transform, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xaebea6c, size 0xc, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_CachedScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_CachedScale() ;

constexpr ::UnityEngine::Splines::Spline* const& __cordl_internal_get_m_CachedSource() const;

constexpr ::UnityEngine::Splines::Spline*& __cordl_internal_get_m_CachedSource() ;

constexpr bool const& __cordl_internal_get_m_IsAllocated() const;

constexpr bool& __cordl_internal_get_m_IsAllocated() ;

constexpr ::UnityEngine::Splines::NativeSpline const& __cordl_internal_get_m_NativeSpline() const;

constexpr ::UnityEngine::Splines::NativeSpline& __cordl_internal_get_m_NativeSpline() ;

constexpr void __cordl_internal_set_m_CachedScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_CachedSource(::UnityEngine::Splines::Spline*  value) ;

constexpr void __cordl_internal_set_m_IsAllocated(bool  value) ;

constexpr void __cordl_internal_set_m_NativeSpline(::UnityEngine::Splines::NativeSpline  value) ;

/// @brief Method .ctor, addr 0xaebe404, size 0x1a0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Splines::Spline*  spline, ::UnityEngine::Transform*  transform, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method get_Closed, addr 0xaebe9f4, size 0x8, virtual true, abstract: false, final true
inline bool get_Closed() ;

/// @brief Method get_Count, addr 0xaebe9fc, size 0xc, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0xaebe9b0, size 0x44, virtual true, abstract: false, final true
inline ::UnityEngine::Splines::BezierKnot get_Item(int32_t  index) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::BezierKnot>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__Splines__BezierKnot_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::BezierKnot>* i___System__Collections__Generic__IReadOnlyCollection_1___UnityEngine__Splines__BezierKnot_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>"
constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::BezierKnot>* i___System__Collections__Generic__IReadOnlyList_1___UnityEngine__Splines__BezierKnot_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Convert to "::UnityEngine::Splines::ISpline"
constexpr ::UnityEngine::Splines::ISpline* i___UnityEngine__Splines__ISpline() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CachedScaledSpline() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CachedScaledSpline", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CachedScaledSpline(CachedScaledSpline && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CachedScaledSpline", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CachedScaledSpline(CachedScaledSpline const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22368};

/// @brief Field m_NativeSpline, offset: 0x10, size: 0x48, def value: None
 ::UnityEngine::Splines::NativeSpline  ___m_NativeSpline;

/// @brief Field m_CachedSource, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Splines::Spline*  ___m_CachedSource;

/// @brief Field m_CachedScale, offset: 0x60, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_CachedScale;

/// @brief Field m_IsAllocated, offset: 0x6c, size: 0x1, def value: None
 bool  ___m_IsAllocated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CachedScaledSpline, ___m_NativeSpline) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CachedScaledSpline, ___m_CachedSource) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CachedScaledSpline, ___m_CachedScale) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CachedScaledSpline, ___m_IsAllocated) == 0x6c, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CachedScaledSpline) == 0x70, "Size mismatch!");

} // namespace end def Unity::Cinemachine
