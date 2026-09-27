#pragma once
// IWYU pragma private; include "UnityEngine/Recorder/RecorderBindings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Recorder/zzzz__SerializedDictionary_2_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RecorderBindings)
namespace UnityEngine::Recorder {
class RecorderBindings_PropertyObjects;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Recorder {
class RecorderBindings;
}
namespace UnityEngine::Recorder {
class RecorderBindings_PropertyObjects;
}
// Write type traits
MARK_REF_T(::UnityEngine::Recorder::RecorderBindings*);
MARK_REF_T(::UnityEngine::Recorder::RecorderBindings_PropertyObjects*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Recorder::RecorderBindings*, "UnityEngine.Recorder", "RecorderBindings");
DEFINE_IL2CPP_CLASS(::UnityEngine::Recorder::RecorderBindings_PropertyObjects*, "UnityEngine.Recorder", "RecorderBindings/PropertyObjects");
// [ExecuteInEditMode]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::Recorder {
// Is value type: false
// CS Name: UnityEngine.Recorder.RecorderBindings
class CORDL_TYPE RecorderBindings : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PropertyObjects = ::UnityEngine::Recorder::RecorderBindings_PropertyObjects;

/// @brief Field m_References, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_References, put=__cordl_internal_set_m_References)) ::UnityEngine::Recorder::RecorderBindings_PropertyObjects*  m_References;

/// @brief Method DuplicateBinding, addr 0xb1103f0, size 0xe8, virtual false, abstract: false, final false
inline void DuplicateBinding(::StringW  src, ::StringW  dst) ;

/// @brief Method GetBindingValue, addr 0xb1101b4, size 0x8c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> GetBindingValue(::StringW  id) ;

/// @brief Method HasBindingValue, addr 0xb110240, size 0x6c, virtual false, abstract: false, final false
inline bool HasBindingValue(::StringW  id) ;

/// @brief Method IsEmpty, addr 0xb11035c, size 0x94, virtual false, abstract: false, final false
inline bool IsEmpty() ;

/// @brief Method MarkSceneDirty, addr 0xb110358, size 0x4, virtual false, abstract: false, final false
inline void MarkSceneDirty() ;

static inline ::UnityEngine::Recorder::RecorderBindings* New_ctor() ;

/// @brief Method RemoveBinding, addr 0xb1102ac, size 0xac, virtual false, abstract: false, final false
inline void RemoveBinding(::StringW  id) ;

/// @brief Method SetBindingValue, addr 0xb110138, size 0x7c, virtual false, abstract: false, final false
inline void SetBindingValue(::StringW  id, ::UnityEngine::Object*  value) ;

constexpr ::UnityEngine::Recorder::RecorderBindings_PropertyObjects* const& __cordl_internal_get_m_References() const;

constexpr ::UnityEngine::Recorder::RecorderBindings_PropertyObjects*& __cordl_internal_get_m_References() ;

constexpr void __cordl_internal_set_m_References(::UnityEngine::Recorder::RecorderBindings_PropertyObjects*  value) ;

/// @brief Method .ctor, addr 0xb1104d8, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RecorderBindings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RecorderBindings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RecorderBindings(RecorderBindings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RecorderBindings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RecorderBindings(RecorderBindings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33013};

/// [SerializeField]
/// @brief Field m_References, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Recorder::RecorderBindings_PropertyObjects*  ___m_References;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Recorder::RecorderBindings, ___m_References) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Recorder::RecorderBindings) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Recorder
// Dependencies UnityEngine.Recorder.SerializedDictionary`2<TKey, TValue>
namespace UnityEngine::Recorder {
// Is value type: false
// CS Name: UnityEngine.Recorder.RecorderBindings/PropertyObjects
class CORDL_TYPE RecorderBindings_PropertyObjects : public ::UnityEngine::Recorder::SerializedDictionary_2<::StringW,::UnityW<::UnityEngine::Object>> {
public:
// Declarations
static inline ::UnityEngine::Recorder::RecorderBindings_PropertyObjects* New_ctor() ;

/// @brief Method .ctor, addr 0xb110540, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RecorderBindings_PropertyObjects() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RecorderBindings_PropertyObjects", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RecorderBindings_PropertyObjects(RecorderBindings_PropertyObjects && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RecorderBindings_PropertyObjects", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RecorderBindings_PropertyObjects(RecorderBindings_PropertyObjects const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33012};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Recorder::RecorderBindings_PropertyObjects) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Recorder
