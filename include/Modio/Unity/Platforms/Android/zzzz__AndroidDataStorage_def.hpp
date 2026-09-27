#pragma once
// IWYU pragma private; include "Modio/Unity/Platforms/Android/AndroidDataStorage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/FileIO/zzzz__BaseDataStorage_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidDataStorage)
namespace Modio {
class Error;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace Modio::Unity::Platforms::Android {
class AndroidDataStorage;
}
// Write type traits
MARK_REF_T(::Modio::Unity::Platforms::Android::AndroidDataStorage*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::Platforms::Android::AndroidDataStorage*, "Modio.Unity.Platforms.Android", "AndroidDataStorage");
// Dependencies Modio.FileIO.BaseDataStorage
namespace Modio::Unity::Platforms::Android {
// Is value type: false
// CS Name: Modio.Unity.Platforms.Android.AndroidDataStorage
class CORDL_TYPE AndroidDataStorage : public ::Modio::FileIO::BaseDataStorage {
public:
// Declarations
/// @brief Method Finalize, addr 0x9f9d3b4, size 0x88, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetAvailableFreeSpace, addr 0x9f9da24, size 0x1e4, virtual true, abstract: false, final false
inline int64_t GetAvailableFreeSpace() ;

/// @brief Method Init, addr 0x9f9d43c, size 0x5e8, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Init() ;

static inline ::Modio::Unity::Platforms::Android::AndroidDataStorage* New_ctor() ;

/// @brief Method .ctor, addr 0x9f9dc08, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidDataStorage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidDataStorage", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidDataStorage(AndroidDataStorage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidDataStorage", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidDataStorage(AndroidDataStorage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33004};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::Platforms::Android::AndroidDataStorage) == 0x48, "Size mismatch!");

} // namespace end def Modio::Unity::Platforms::Android
