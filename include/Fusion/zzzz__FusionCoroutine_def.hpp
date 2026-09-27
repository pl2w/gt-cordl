#pragma once
// IWYU pragma private; include "Fusion/FusionCoroutine.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FusionCoroutine)
namespace Fusion {
class IAsyncOperation;
}
namespace Fusion {
class ICoroutine;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion {
class FusionCoroutine;
}
// Write type traits
MARK_REF_T(::Fusion::FusionCoroutine*);
DEFINE_IL2CPP_CLASS(::Fusion::FusionCoroutine*, "Fusion", "FusionCoroutine");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionCoroutine
class CORDL_TYPE FusionCoroutine : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Error, put=set_Error)) ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  Error;

 __declspec(property(get=get_IsDone, put=set_IsDone)) bool  IsDone;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <Error>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Error_k__BackingField, put=__cordl_internal_set__Error_k__BackingField)) ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  _Error_k__BackingField;

/// @brief Field <IsDone>k__BackingField, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsDone_k__BackingField, put=__cordl_internal_set__IsDone_k__BackingField)) bool  _IsDone_k__BackingField;

/// @brief Field _activateAsync, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__activateAsync, put=__cordl_internal_set__activateAsync)) ::System::Action*  _activateAsync;

/// @brief Field _completed, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__completed, put=__cordl_internal_set__completed)) ::System::Action_1<::Fusion::IAsyncOperation*>*  _completed;

/// @brief Field _inner, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__inner, put=__cordl_internal_set__inner)) ::System::Collections::IEnumerator*  _inner;

/// @brief Field _progress, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__progress, put=__cordl_internal_set__progress)) float_t  _progress;

/// @brief Convert operator to "::Fusion::IAsyncOperation"
constexpr operator  ::Fusion::IAsyncOperation*() noexcept;

/// @brief Convert operator to "::Fusion::ICoroutine"
constexpr operator  ::Fusion::ICoroutine*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x60e0f10, size 0xb4, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Fusion::FusionCoroutine* New_ctor(::System::Collections::IEnumerator*  inner) ;

/// @brief Method System.Collections.IEnumerator.MoveNext, addr 0x60e0c20, size 0x194, virtual true, abstract: false, final true
inline bool System_Collections_IEnumerator_MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x60e0db4, size 0xb8, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x60e0e6c, size 0xa4, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& __cordl_internal_get__Error_k__BackingField() const;

constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& __cordl_internal_get__Error_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsDone_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsDone_k__BackingField() ;

constexpr ::System::Action* const& __cordl_internal_get__activateAsync() const;

constexpr ::System::Action*& __cordl_internal_get__activateAsync() ;

constexpr ::System::Action_1<::Fusion::IAsyncOperation*>* const& __cordl_internal_get__completed() const;

constexpr ::System::Action_1<::Fusion::IAsyncOperation*>*& __cordl_internal_get__completed() ;

constexpr ::System::Collections::IEnumerator* const& __cordl_internal_get__inner() const;

constexpr ::System::Collections::IEnumerator*& __cordl_internal_get__inner() ;

constexpr float_t const& __cordl_internal_get__progress() const;

constexpr float_t& __cordl_internal_get__progress() ;

constexpr void __cordl_internal_set__Error_k__BackingField(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value) ;

constexpr void __cordl_internal_set__IsDone_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__activateAsync(::System::Action*  value) ;

constexpr void __cordl_internal_set__completed(::System::Action_1<::Fusion::IAsyncOperation*>*  value) ;

constexpr void __cordl_internal_set__inner(::System::Collections::IEnumerator*  value) ;

constexpr void __cordl_internal_set__progress(float_t  value) ;

/// @brief Method .ctor, addr 0x60e09e8, size 0x84, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::IEnumerator*  inner) ;

/// @brief Method add_Completed, addr 0x60e0a6c, size 0xec, virtual true, abstract: false, final true
inline void add_Completed(::System::Action_1<::Fusion::IAsyncOperation*>*  value) ;

/// [CompilerGenerated]
/// @brief Method get_Error, addr 0x60e0c10, size 0x8, virtual true, abstract: false, final true
inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* get_Error() ;

/// [CompilerGenerated]
/// @brief Method get_IsDone, addr 0x60e0c00, size 0x8, virtual true, abstract: false, final true
inline bool get_IsDone() ;

/// @brief Convert to "::Fusion::IAsyncOperation"
constexpr ::Fusion::IAsyncOperation* i___Fusion__IAsyncOperation() noexcept;

/// @brief Convert to "::Fusion::ICoroutine"
constexpr ::Fusion::ICoroutine* i___Fusion__ICoroutine() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method remove_Completed, addr 0x60e0b58, size 0xa8, virtual true, abstract: false, final true
inline void remove_Completed(::System::Action_1<::Fusion::IAsyncOperation*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Error, addr 0x60e0c18, size 0x8, virtual false, abstract: false, final false
inline void set_Error(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsDone, addr 0x60e0c08, size 0x8, virtual false, abstract: false, final false
inline void set_IsDone(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionCoroutine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionCoroutine", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionCoroutine(FusionCoroutine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionCoroutine", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionCoroutine(FusionCoroutine const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23422};

/// @brief Field _inner, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::IEnumerator*  ____inner;

/// @brief Field _completed, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::Fusion::IAsyncOperation*>*  ____completed;

/// @brief Field _progress, offset: 0x20, size: 0x4, def value: None
 float_t  ____progress;

/// @brief Field _activateAsync, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  ____activateAsync;

/// [CompilerGenerated]
/// @brief Field <IsDone>k__BackingField, offset: 0x30, size: 0x1, def value: None
 bool  ____IsDone_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Error>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  ____Error_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::FusionCoroutine, ____inner) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionCoroutine, ____completed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionCoroutine, ____progress) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionCoroutine, ____activateAsync) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionCoroutine, ____IsDone_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionCoroutine, ____Error_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Fusion::FusionCoroutine) == 0x40, "Size mismatch!");

} // namespace end def Fusion
