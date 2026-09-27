#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Pseudo/ReadOnlyMessageFragment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/Pseudo/zzzz__MessageFragment_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ReadOnlyMessageFragment)
namespace UnityEngine::Localization::Pseudo {
class ReadOnlyMessageFragment___c;
}
namespace UnityEngine::Pool {
template<typename T>
class ObjectPool_1;
}
// Forward declare root types
namespace UnityEngine::Localization::Pseudo {
class ReadOnlyMessageFragment;
}
namespace UnityEngine::Localization::Pseudo {
class ReadOnlyMessageFragment___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Pseudo::ReadOnlyMessageFragment*);
MARK_REF_T(::UnityEngine::Localization::Pseudo::ReadOnlyMessageFragment___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Pseudo::ReadOnlyMessageFragment*, "UnityEngine.Localization.Pseudo", "ReadOnlyMessageFragment");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Pseudo::ReadOnlyMessageFragment___c*, "UnityEngine.Localization.Pseudo", "ReadOnlyMessageFragment/<>c");
// [DebuggerDisplay("ReadOnly: {Text}")]
// Dependencies UnityEngine.Localization.Pseudo.MessageFragment
namespace UnityEngine::Localization::Pseudo {
// Is value type: false
// CS Name: UnityEngine.Localization.Pseudo.ReadOnlyMessageFragment
class CORDL_TYPE ReadOnlyMessageFragment : public ::UnityEngine::Localization::Pseudo::MessageFragment {
public:
// Declarations
using __c = ::UnityEngine::Localization::Pseudo::ReadOnlyMessageFragment___c;

/// @brief Field Pool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pool, put=setStaticF_Pool)) ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Pseudo::ReadOnlyMessageFragment*>*  Pool;

 __declspec(property(get=get_Text)) ::StringW  Text;

static inline ::UnityEngine::Localization::Pseudo::ReadOnlyMessageFragment* New_ctor() ;

/// @brief Method .ctor, addr 0xb02225c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Pseudo::ReadOnlyMessageFragment*>* getStaticF_Pool() ;

/// @brief Method get_Text, addr 0xb022250, size 0xc, virtual false, abstract: false, final false
inline ::StringW get_Text() ;

static inline void setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Pseudo::ReadOnlyMessageFragment*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReadOnlyMessageFragment() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReadOnlyMessageFragment", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReadOnlyMessageFragment(ReadOnlyMessageFragment && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReadOnlyMessageFragment", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReadOnlyMessageFragment(ReadOnlyMessageFragment const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25118};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::Pseudo::ReadOnlyMessageFragment) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Pseudo
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization::Pseudo {
// Is value type: false
// CS Name: UnityEngine.Localization.Pseudo.ReadOnlyMessageFragment/<>c
class CORDL_TYPE ReadOnlyMessageFragment___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Localization::Pseudo::ReadOnlyMessageFragment___c*  __9;

static inline ::UnityEngine::Localization::Pseudo::ReadOnlyMessageFragment___c* New_ctor() ;

/// @brief Method <.cctor>b__4_0, addr 0xb022410, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Pseudo::ReadOnlyMessageFragment* __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0xb022408, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Localization::Pseudo::ReadOnlyMessageFragment___c* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::Localization::Pseudo::ReadOnlyMessageFragment___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReadOnlyMessageFragment___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReadOnlyMessageFragment___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReadOnlyMessageFragment___c(ReadOnlyMessageFragment___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReadOnlyMessageFragment___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReadOnlyMessageFragment___c(ReadOnlyMessageFragment___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25117};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::Pseudo::ReadOnlyMessageFragment___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Pseudo
