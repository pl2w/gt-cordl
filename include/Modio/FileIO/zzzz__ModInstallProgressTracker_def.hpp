#pragma once
// IWYU pragma private; include "Modio/FileIO/ModInstallProgressTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModInstallProgressTracker)
namespace Modio::Mods {
class Mod;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace Modio::FileIO {
class ModInstallProgressTracker;
}
// Write type traits
MARK_REF_T(::Modio::FileIO::ModInstallProgressTracker*);
DEFINE_IL2CPP_CLASS(::Modio::FileIO::ModInstallProgressTracker*, "Modio.FileIO", "ModInstallProgressTracker");
// Dependencies System.DateTime, System.Object
namespace Modio::FileIO {
// Is value type: false
// CS Name: Modio.FileIO.ModInstallProgressTracker
class CORDL_TYPE ModInstallProgressTracker : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_CurrentBytesGetter, put=set_CurrentBytesGetter)) ::System::Func_1<int64_t>*  CurrentBytesGetter;

/// @brief Field _bytesPerSecond, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__bytesPerSecond, put=__cordl_internal_set__bytesPerSecond)) int64_t  _bytesPerSecond;

/// @brief Field _currentBytesGetter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentBytesGetter, put=__cordl_internal_set__currentBytesGetter)) ::System::Func_1<int64_t>*  _currentBytesGetter;

/// @brief Field _lastCalculatedAt, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastCalculatedAt, put=__cordl_internal_set__lastCalculatedAt)) ::System::DateTime  _lastCalculatedAt;

/// @brief Field _lastCalculatedSpeedAtBytes, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastCalculatedSpeedAtBytes, put=__cordl_internal_set__lastCalculatedSpeedAtBytes)) int64_t  _lastCalculatedSpeedAtBytes;

/// @brief Field _mod, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__mod, put=__cordl_internal_set__mod)) ::Modio::Mods::Mod*  _mod;

/// @brief Field _totalSize, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__totalSize, put=__cordl_internal_set__totalSize)) int64_t  _totalSize;

static inline ::Modio::FileIO::ModInstallProgressTracker* New_ctor(::Modio::Mods::Mod*  mod, int64_t  totalSize, ::System::Func_1<int64_t>*  currentBytesGetter) ;

/// @brief Method SetBytesRead, addr 0xa05493c, size 0x180, virtual false, abstract: false, final false
inline void SetBytesRead(int64_t  currentBytes) ;

/// @brief Method Update, addr 0xa054908, size 0x34, virtual false, abstract: false, final false
inline void Update() ;

constexpr int64_t const& __cordl_internal_get__bytesPerSecond() const;

constexpr int64_t& __cordl_internal_get__bytesPerSecond() ;

constexpr ::System::Func_1<int64_t>* const& __cordl_internal_get__currentBytesGetter() const;

constexpr ::System::Func_1<int64_t>*& __cordl_internal_get__currentBytesGetter() ;

constexpr ::System::DateTime const& __cordl_internal_get__lastCalculatedAt() const;

constexpr ::System::DateTime& __cordl_internal_get__lastCalculatedAt() ;

constexpr int64_t const& __cordl_internal_get__lastCalculatedSpeedAtBytes() const;

constexpr int64_t& __cordl_internal_get__lastCalculatedSpeedAtBytes() ;

constexpr ::Modio::Mods::Mod* const& __cordl_internal_get__mod() const;

constexpr ::Modio::Mods::Mod*& __cordl_internal_get__mod() ;

constexpr int64_t const& __cordl_internal_get__totalSize() const;

constexpr int64_t& __cordl_internal_get__totalSize() ;

constexpr void __cordl_internal_set__bytesPerSecond(int64_t  value) ;

constexpr void __cordl_internal_set__currentBytesGetter(::System::Func_1<int64_t>*  value) ;

constexpr void __cordl_internal_set__lastCalculatedAt(::System::DateTime  value) ;

constexpr void __cordl_internal_set__lastCalculatedSpeedAtBytes(int64_t  value) ;

constexpr void __cordl_internal_set__mod(::Modio::Mods::Mod*  value) ;

constexpr void __cordl_internal_set__totalSize(int64_t  value) ;

/// @brief Method .ctor, addr 0xa0548a4, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::Modio::Mods::Mod*  mod, int64_t  totalSize, ::System::Func_1<int64_t>*  currentBytesGetter) ;

/// @brief Method get_CurrentBytesGetter, addr 0xa0548f8, size 0x8, virtual false, abstract: false, final false
inline ::System::Func_1<int64_t>* get_CurrentBytesGetter() ;

/// @brief Method set_CurrentBytesGetter, addr 0xa054900, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentBytesGetter(::System::Func_1<int64_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModInstallProgressTracker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModInstallProgressTracker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModInstallProgressTracker(ModInstallProgressTracker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModInstallProgressTracker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModInstallProgressTracker(ModInstallProgressTracker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17679};

/// @brief Field _mod, offset: 0x10, size: 0x8, def value: None
 ::Modio::Mods::Mod*  ____mod;

/// @brief Field _totalSize, offset: 0x18, size: 0x8, def value: None
 int64_t  ____totalSize;

/// @brief Field _currentBytesGetter, offset: 0x20, size: 0x8, def value: None
 ::System::Func_1<int64_t>*  ____currentBytesGetter;

/// @brief Field _lastCalculatedAt, offset: 0x28, size: 0x8, def value: None
 ::System::DateTime  ____lastCalculatedAt;

/// @brief Field _bytesPerSecond, offset: 0x30, size: 0x8, def value: None
 int64_t  ____bytesPerSecond;

/// @brief Field _lastCalculatedSpeedAtBytes, offset: 0x38, size: 0x8, def value: None
 int64_t  ____lastCalculatedSpeedAtBytes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::FileIO::ModInstallProgressTracker, ____mod) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::FileIO::ModInstallProgressTracker, ____totalSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::FileIO::ModInstallProgressTracker, ____currentBytesGetter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::FileIO::ModInstallProgressTracker, ____lastCalculatedAt) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::FileIO::ModInstallProgressTracker, ____bytesPerSecond) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::FileIO::ModInstallProgressTracker, ____lastCalculatedSpeedAtBytes) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Modio::FileIO::ModInstallProgressTracker) == 0x40, "Size mismatch!");

} // namespace end def Modio::FileIO
