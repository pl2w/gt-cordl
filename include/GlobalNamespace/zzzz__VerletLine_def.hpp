#pragma once
// IWYU pragma private; include "GlobalNamespace/VerletLine.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VerletLine_LineNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VerletLine)
namespace GlobalNamespace {
struct VerletLine_LineNode;
}
namespace GlobalNamespace {
class VerletLine__ResizeAfterDelay_d__31;
}
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
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class VerletLine;
}
namespace GlobalNamespace {
class VerletLine__ResizeAfterDelay_d__31;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VerletLine*);
MARK_REF_T(::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VerletLine*, "", "VerletLine");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31*, "", "VerletLine/<ResizeAfterDelay>d__31");
// [DisallowMultipleComponent]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3, VerletLine::LineNode
namespace GlobalNamespace {
// Is value type: false
// CS Name: VerletLine
class CORDL_TYPE VerletLine : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using LineNode = ::GlobalNamespace::VerletLine_LineNode;

using _ResizeAfterDelay_d__31 = ::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31;

/// @brief Field _nodes, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__nodes, put=__cordl_internal_set__nodes)) ::ArrayW<::GlobalNamespace::VerletLine_LineNode>  _nodes;

/// @brief Field _positions, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__positions, put=__cordl_internal_set__positions)) ::ArrayW<::UnityEngine::Vector3>  _positions;

/// @brief Field endLineAnchorLocalPosition, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get_endLineAnchorLocalPosition, put=__cordl_internal_set_endLineAnchorLocalPosition)) ::UnityEngine::Vector3  endLineAnchorLocalPosition;

/// @brief Field endMaxSpeed, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_endMaxSpeed, put=__cordl_internal_set_endMaxSpeed)) float_t  endMaxSpeed;

/// @brief Field endRigidbody, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_endRigidbody, put=__cordl_internal_set_endRigidbody)) ::UnityW<::UnityEngine::Rigidbody>  endRigidbody;

/// @brief Field endRigidbodyParent, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_endRigidbodyParent, put=__cordl_internal_set_endRigidbodyParent)) ::UnityW<::UnityEngine::Transform>  endRigidbodyParent;

/// @brief Field gravity, offset 0x74, size 0xc 
 __declspec(property(get=__cordl_internal_get_gravity, put=__cordl_internal_set_gravity)) ::UnityEngine::Vector3  gravity;

/// @brief Field line, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_line, put=__cordl_internal_set_line)) ::UnityW<::UnityEngine::LineRenderer>  line;

/// @brief Field lineEnd, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_lineEnd, put=__cordl_internal_set_lineEnd)) ::UnityW<::UnityEngine::Transform>  lineEnd;

/// @brief Field lineStart, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_lineStart, put=__cordl_internal_set_lineStart)) ::UnityW<::UnityEngine::Transform>  lineStart;

/// @brief Field onlyPullAtEdges, offset 0xac, size 0x1 
 __declspec(property(get=__cordl_internal_get_onlyPullAtEdges, put=__cordl_internal_set_onlyPullAtEdges)) bool  onlyPullAtEdges;

/// @brief Field resizeScale, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_resizeScale, put=__cordl_internal_set_resizeScale)) float_t  resizeScale;

/// @brief Field resizeSpeed, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_resizeSpeed, put=__cordl_internal_set_resizeSpeed)) float_t  resizeSpeed;

/// @brief Field rigidBodyStartingLocalPosition, offset 0x54, size 0xc 
 __declspec(property(get=__cordl_internal_get_rigidBodyStartingLocalPosition, put=__cordl_internal_set_rigidBodyStartingLocalPosition)) ::UnityEngine::Vector3  rigidBodyStartingLocalPosition;

/// @brief Field scaleLineWidth, offset 0xad, size 0x1 
 __declspec(property(get=__cordl_internal_get_scaleLineWidth, put=__cordl_internal_set_scaleLineWidth)) bool  scaleLineWidth;

/// @brief Field segmentLength, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_segmentLength, put=__cordl_internal_set_segmentLength)) float_t  segmentLength;

/// @brief Field segmentMaxLength, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_segmentMaxLength, put=__cordl_internal_set_segmentMaxLength)) float_t  segmentMaxLength;

/// @brief Field segmentMinLength, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_segmentMinLength, put=__cordl_internal_set_segmentMinLength)) float_t  segmentMinLength;

/// @brief Field segmentNumber, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_segmentNumber, put=__cordl_internal_set_segmentNumber)) int32_t  segmentNumber;

/// @brief Field segmentTargetLength, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_segmentTargetLength, put=__cordl_internal_set_segmentTargetLength)) float_t  segmentTargetLength;

/// @brief Field simIterations, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_simIterations, put=__cordl_internal_set_simIterations)) int32_t  simIterations;

/// @brief Field tension, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_tension, put=__cordl_internal_set_tension)) float_t  tension;

/// @brief Field tensionScale, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_tensionScale, put=__cordl_internal_set_tensionScale)) float_t  tensionScale;

/// @brief Field totalLineLength, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalLineLength, put=__cordl_internal_set_totalLineLength)) float_t  totalLineLength;

/// @brief Method AddSegmentLength, addr 0x59a6f70, size 0x60, virtual false, abstract: false, final false
inline void AddSegmentLength(float_t  amount, float_t  delay) ;

/// @brief Method Awake, addr 0x59a6a50, size 0x2e8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0x59a7184, size 0x6d0, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method ForceTotalLength, addr 0x59a715c, size 0x28, virtual false, abstract: false, final false
inline void ForceTotalLength(float_t  totalLength) ;

/// @brief Method LimitDistance, addr 0x59a78b4, size 0xf0, virtual false, abstract: false, final false
static inline void LimitDistance(::by_ref<::GlobalNamespace::VerletLine_LineNode>  p1, ::by_ref<::GlobalNamespace::VerletLine_LineNode>  p2, float_t  restLength) ;

static inline ::GlobalNamespace::VerletLine* New_ctor() ;

/// @brief Method OnDisable, addr 0x59a6e08, size 0x90, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x59a6d38, size 0xd0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RemoveSegmentLength, addr 0x59a6fd0, size 0x58, virtual false, abstract: false, final false
inline void RemoveSegmentLength(float_t  amount, float_t  delay) ;

/// [IteratorStateMachine(typeof(VerletLine::<ResizeAfterDelay>d__31))]
/// @brief Method ResizeAfterDelay, addr 0x59a6f08, size 0x68, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ResizeAfterDelay(float_t  delay) ;

/// @brief Method SetLength, addr 0x59a6e98, size 0x70, virtual false, abstract: false, final false
inline void SetLength(float_t  total, float_t  delay) ;

/// @brief Method Simulate, addr 0x59a7854, size 0x60, virtual false, abstract: false, final false
static inline void Simulate(::by_ref<::GlobalNamespace::VerletLine_LineNode>  p, float_t  dt) ;

/// @brief Method Update, addr 0x59a7050, size 0x10c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<::GlobalNamespace::VerletLine_LineNode> const& __cordl_internal_get__nodes() const;

constexpr ::ArrayW<::GlobalNamespace::VerletLine_LineNode>& __cordl_internal_get__nodes() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get__positions() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get__positions() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_endLineAnchorLocalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_endLineAnchorLocalPosition() ;

constexpr float_t const& __cordl_internal_get_endMaxSpeed() const;

constexpr float_t& __cordl_internal_get_endMaxSpeed() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_endRigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_endRigidbody() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_endRigidbodyParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_endRigidbodyParent() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_gravity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_gravity() ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_line() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_line() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_lineEnd() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_lineEnd() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_lineStart() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_lineStart() ;

constexpr bool const& __cordl_internal_get_onlyPullAtEdges() const;

constexpr bool& __cordl_internal_get_onlyPullAtEdges() ;

constexpr float_t const& __cordl_internal_get_resizeScale() const;

constexpr float_t& __cordl_internal_get_resizeScale() ;

constexpr float_t const& __cordl_internal_get_resizeSpeed() const;

constexpr float_t& __cordl_internal_get_resizeSpeed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rigidBodyStartingLocalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rigidBodyStartingLocalPosition() ;

constexpr bool const& __cordl_internal_get_scaleLineWidth() const;

constexpr bool& __cordl_internal_get_scaleLineWidth() ;

constexpr float_t const& __cordl_internal_get_segmentLength() const;

constexpr float_t& __cordl_internal_get_segmentLength() ;

constexpr float_t const& __cordl_internal_get_segmentMaxLength() const;

constexpr float_t& __cordl_internal_get_segmentMaxLength() ;

constexpr float_t const& __cordl_internal_get_segmentMinLength() const;

constexpr float_t& __cordl_internal_get_segmentMinLength() ;

constexpr int32_t const& __cordl_internal_get_segmentNumber() const;

constexpr int32_t& __cordl_internal_get_segmentNumber() ;

constexpr float_t const& __cordl_internal_get_segmentTargetLength() const;

constexpr float_t& __cordl_internal_get_segmentTargetLength() ;

constexpr int32_t const& __cordl_internal_get_simIterations() const;

constexpr int32_t& __cordl_internal_get_simIterations() ;

constexpr float_t const& __cordl_internal_get_tension() const;

constexpr float_t& __cordl_internal_get_tension() ;

constexpr float_t const& __cordl_internal_get_tensionScale() const;

constexpr float_t& __cordl_internal_get_tensionScale() ;

constexpr float_t const& __cordl_internal_get_totalLineLength() const;

constexpr float_t& __cordl_internal_get_totalLineLength() ;

constexpr void __cordl_internal_set__nodes(::ArrayW<::GlobalNamespace::VerletLine_LineNode>  value) ;

constexpr void __cordl_internal_set__positions(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_endLineAnchorLocalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_endMaxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_endRigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_endRigidbodyParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_gravity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_line(::UnityW<::UnityEngine::LineRenderer>  value) ;

constexpr void __cordl_internal_set_lineEnd(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_lineStart(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_onlyPullAtEdges(bool  value) ;

constexpr void __cordl_internal_set_resizeScale(float_t  value) ;

constexpr void __cordl_internal_set_resizeSpeed(float_t  value) ;

constexpr void __cordl_internal_set_rigidBodyStartingLocalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_scaleLineWidth(bool  value) ;

constexpr void __cordl_internal_set_segmentLength(float_t  value) ;

constexpr void __cordl_internal_set_segmentMaxLength(float_t  value) ;

constexpr void __cordl_internal_set_segmentMinLength(float_t  value) ;

constexpr void __cordl_internal_set_segmentNumber(int32_t  value) ;

constexpr void __cordl_internal_set_segmentTargetLength(float_t  value) ;

constexpr void __cordl_internal_set_simIterations(int32_t  value) ;

constexpr void __cordl_internal_set_tension(float_t  value) ;

constexpr void __cordl_internal_set_tensionScale(float_t  value) ;

constexpr void __cordl_internal_set_totalLineLength(float_t  value) ;

/// @brief Method .ctor, addr 0x59a79a4, size 0xe4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VerletLine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VerletLine", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VerletLine(VerletLine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VerletLine", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VerletLine(VerletLine const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2638};

/// @brief Field lineStart, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___lineStart;

/// @brief Field lineEnd, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___lineEnd;

/// [Space]
/// @brief Field line, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ___line;

/// @brief Field endRigidbody, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___endRigidbody;

/// @brief Field endRigidbodyParent, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___endRigidbodyParent;

/// @brief Field endLineAnchorLocalPosition, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___endLineAnchorLocalPosition;

/// @brief Field rigidBodyStartingLocalPosition, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rigidBodyStartingLocalPosition;

/// [Space]
/// @brief Field segmentNumber, offset: 0x60, size: 0x4, def value: None
 int32_t  ___segmentNumber;

/// @brief Field segmentLength, offset: 0x64, size: 0x4, def value: None
 float_t  ___segmentLength;

/// @brief Field segmentTargetLength, offset: 0x68, size: 0x4, def value: None
 float_t  ___segmentTargetLength;

/// @brief Field segmentMaxLength, offset: 0x6c, size: 0x4, def value: None
 float_t  ___segmentMaxLength;

/// @brief Field segmentMinLength, offset: 0x70, size: 0x4, def value: None
 float_t  ___segmentMinLength;

/// [Space]
/// @brief Field gravity, offset: 0x74, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___gravity;

/// @brief Field simIterations, offset: 0x80, size: 0x4, def value: None
 int32_t  ___simIterations;

/// @brief Field tension, offset: 0x84, size: 0x4, def value: None
 float_t  ___tension;

/// @brief Field tensionScale, offset: 0x88, size: 0x4, def value: None
 float_t  ___tensionScale;

/// @brief Field endMaxSpeed, offset: 0x8c, size: 0x4, def value: None
 float_t  ___endMaxSpeed;

/// [FormerlySerializedAs("lerpSpeed")]
/// [Space]
/// @brief Field resizeSpeed, offset: 0x90, size: 0x4, def value: None
 float_t  ___resizeSpeed;

/// @brief Field resizeScale, offset: 0x94, size: 0x4, def value: None
 float_t  ___resizeScale;

/// @brief Field _nodes, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::VerletLine_LineNode>  ____nodes;

/// @brief Field _positions, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ____positions;

/// @brief Field totalLineLength, offset: 0xa8, size: 0x4, def value: None
 float_t  ___totalLineLength;

/// [SerializeField]
/// @brief Field onlyPullAtEdges, offset: 0xac, size: 0x1, def value: None
 bool  ___onlyPullAtEdges;

/// [SerializeField]
/// @brief Field scaleLineWidth, offset: 0xad, size: 0x1, def value: None
 bool  ___scaleLineWidth;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VerletLine, ___lineStart) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VerletLine, ___lineEnd) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VerletLine, ___line) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VerletLine, ___endRigidbody) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VerletLine, ___endRigidbodyParent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VerletLine, ___endLineAnchorLocalPosition) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VerletLine, ___rigidBodyStartingLocalPosition) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VerletLine, ___segmentNumber) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VerletLine, ___segmentLength) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VerletLine, ___segmentTargetLength) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VerletLine, ___segmentMaxLength) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VerletLine, ___segmentMinLength) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VerletLine, ___gravity) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VerletLine, ___simIterations) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VerletLine, ___tension) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VerletLine, ___tensionScale) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VerletLine, ___endMaxSpeed) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VerletLine, ___resizeSpeed) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VerletLine, ___resizeScale) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VerletLine, ____nodes) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VerletLine, ____positions) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VerletLine, ___totalLineLength) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VerletLine, ___onlyPullAtEdges) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VerletLine, ___scaleLineWidth) == 0xad, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VerletLine) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: VerletLine/<ResizeAfterDelay>d__31
class CORDL_TYPE VerletLine__ResizeAfterDelay_d__31 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field delay, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_delay, put=__cordl_internal_set_delay)) float_t  delay;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x59a7a8c, size 0xa4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x59a7b30, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x59a7b38, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x59a7b70, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x59a7a88, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr float_t const& __cordl_internal_get_delay() const;

constexpr float_t& __cordl_internal_get_delay() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_delay(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x59a7028, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VerletLine__ResizeAfterDelay_d__31() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VerletLine__ResizeAfterDelay_d__31", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VerletLine__ResizeAfterDelay_d__31(VerletLine__ResizeAfterDelay_d__31 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VerletLine__ResizeAfterDelay_d__31", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VerletLine__ResizeAfterDelay_d__31(VerletLine__ResizeAfterDelay_d__31 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2637};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field delay, offset: 0x20, size: 0x4, def value: None
 float_t  ___delay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31, ___delay) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VerletLine__ResizeAfterDelay_d__31) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
