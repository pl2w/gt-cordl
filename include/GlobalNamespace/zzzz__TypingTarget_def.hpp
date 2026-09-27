#pragma once
// IWYU pragma private; include "GlobalNamespace/TypingTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GenericObservable_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TypingTarget)
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class TypingTarget;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TypingTarget*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TypingTarget*, "", "TypingTarget");
// [RequireComponent(typeof(TMPro.TMP_Text))]
// Dependencies GenericObservable
namespace GlobalNamespace {
// Is value type: false
// CS Name: TypingTarget
class CORDL_TYPE TypingTarget : public ::GlobalNamespace::GenericObservable {
public:
// Declarations
 __declspec(property(get=get_Text)) ::StringW  Text;

/// @brief Field backupId, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_backupId, put=__cordl_internal_set_backupId)) ::StringW  backupId;

/// @brief Field charLength, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_charLength, put=__cordl_internal_set_charLength)) int32_t  charLength;

/// @brief Field cursor, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_cursor, put=__cordl_internal_set_cursor)) ::UnityW<::UnityEngine::Transform>  cursor;

/// @brief Field index, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Field pindex, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_pindex, put=__cordl_internal_set_pindex)) int32_t  pindex;

/// @brief Field tmp, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_tmp, put=__cordl_internal_set_tmp)) ::UnityW<::TMPro::TMP_Text>  tmp;

/// @brief Field value, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) ::StringW  value;

/// @brief Method Append, addr 0x5ae05f8, size 0x144, virtual false, abstract: false, final false
inline void Append(::StringW  s) ;

/// @brief Method Awake, addr 0x5ae0548, size 0xb0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Clear, addr 0x5ae084c, size 0x58, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Delete, addr 0x5ae073c, size 0x110, virtual false, abstract: false, final false
inline void Delete() ;

/// @brief Method MoveCursor, addr 0x5ae08a4, size 0x38, virtual false, abstract: false, final false
inline void MoveCursor(int32_t  i) ;

static inline ::GlobalNamespace::TypingTarget* New_ctor() ;

/// @brief Method ObservableSliceUpdate, addr 0x5ae0a20, size 0x174, virtual true, abstract: false, final false
inline void ObservableSliceUpdate() ;

/// @brief Method OnBecameObservable, addr 0x5ae096c, size 0xb4, virtual true, abstract: false, final false
inline void OnBecameObservable() ;

/// @brief Method OnLostObservable, addr 0x5ae08dc, size 0x90, virtual true, abstract: false, final false
inline void OnLostObservable() ;

constexpr ::StringW const& __cordl_internal_get_backupId() const;

constexpr ::StringW& __cordl_internal_get_backupId() ;

constexpr int32_t const& __cordl_internal_get_charLength() const;

constexpr int32_t& __cordl_internal_get_charLength() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_cursor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_cursor() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr int32_t const& __cordl_internal_get_pindex() const;

constexpr int32_t& __cordl_internal_get_pindex() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_tmp() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_tmp() ;

constexpr ::StringW const& __cordl_internal_get_value() const;

constexpr ::StringW& __cordl_internal_get_value() ;

constexpr void __cordl_internal_set_backupId(::StringW  value) ;

constexpr void __cordl_internal_set_charLength(int32_t  value) ;

constexpr void __cordl_internal_set_cursor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

constexpr void __cordl_internal_set_pindex(int32_t  value) ;

constexpr void __cordl_internal_set_tmp(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_value(::StringW  value) ;

/// @brief Method .ctor, addr 0x5ae0b94, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Text, addr 0x5ae0540, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Text() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TypingTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TypingTarget", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TypingTarget(TypingTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypingTarget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypingTarget(TypingTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3452};

/// @brief Field index, offset: 0x50, size: 0x4, def value: None
 int32_t  ___index;

/// @brief Field pindex, offset: 0x54, size: 0x4, def value: None
 int32_t  ___pindex;

/// @brief Field tmp, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___tmp;

/// @brief Field value, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___value;

/// [SerializeField]
/// @brief Field charLength, offset: 0x68, size: 0x4, def value: None
 int32_t  ___charLength;

/// [SerializeField]
/// @brief Field cursor, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___cursor;

/// [SerializeField]
/// @brief Field backupId, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___backupId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TypingTarget, ___index) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TypingTarget, ___pindex) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TypingTarget, ___tmp) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TypingTarget, ___value) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TypingTarget, ___charLength) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TypingTarget, ___cursor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TypingTarget, ___backupId) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TypingTarget) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
