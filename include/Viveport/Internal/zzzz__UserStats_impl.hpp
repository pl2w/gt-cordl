#pragma once
// IWYU pragma private; include "Viveport/Internal/UserStats.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Viveport/Internal/zzzz__UserStats_def.hpp"
#include "Viveport/Internal/zzzz__EAchievementDisplayAttribute_def.hpp"
#include "Viveport/Internal/zzzz__ELeaderboardDataRequest_def.hpp"
#include "Viveport/Internal/zzzz__ELeaderboardDataTimeRange_def.hpp"
#include "Viveport/Internal/zzzz__ELeaderboardDisplayType_def.hpp"
#include "Viveport/Internal/zzzz__ELeaderboardSortMethod_def.hpp"
#include "Viveport/Internal/zzzz__ELocale_def.hpp"
#include "Viveport/Internal/zzzz__StatusCallback_def.hpp"
#include "Viveport/zzzz__Leaderboard_def.hpp"
//  Writing Method size for method: ::Viveport::Internal::UserStats.IsReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Viveport::Internal::StatusCallback*)>(&::Viveport::Internal::UserStats::IsReady)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5b4d9b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"IsReady", {}, {::i2c::type_of<::Viveport::Internal::StatusCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::UserStats.DownloadStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Viveport::Internal::StatusCallback*)>(&::Viveport::Internal::UserStats::DownloadStats)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5b4dce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"DownloadStats", {}, {::i2c::type_of<::Viveport::Internal::StatusCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::UserStats.UploadStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Viveport::Internal::StatusCallback*)>(&::Viveport::Internal::UserStats::UploadStats)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5b4e520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"UploadStats", {}, {::i2c::type_of<::Viveport::Internal::StatusCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::UserStats.SetStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t)>(&::Viveport::Internal::UserStats::SetStat)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5b4e0bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"SetStat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::UserStats.SetStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, float_t)>(&::Viveport::Internal::UserStats::SetStat)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5b4e200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"SetStat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::UserStats.GetStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t)>(&::Viveport::Internal::UserStats::GetStat)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5b4de34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"GetStat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::UserStats.GetStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::StringW, float_t)>(&::Viveport::Internal::UserStats::GetStat)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5b4df78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"GetStat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::UserStats.GetAchievement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Viveport::Internal::UserStats::GetAchievement)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5b4e670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"GetAchievement", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::UserStats.GetAchievementUnlockTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::Viveport::Internal::UserStats::GetAchievementUnlockTime)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5b4e754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"GetAchievementUnlockTime", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::UserStats.SetAchievement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::Viveport::Internal::UserStats::SetAchievement)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5b4ebf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"SetAchievement", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::UserStats.ClearAchievement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::Viveport::Internal::UserStats::ClearAchievement)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5b4ecdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"ClearAchievement", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::UserStats.GetAchievementDisplayAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::Viveport::Internal::EAchievementDisplayAttribute)>(&::Viveport::Internal::UserStats::GetAchievementDisplayAttribute)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5b4e91c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"GetAchievementDisplayAttribute", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Viveport::Internal::EAchievementDisplayAttribute>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::UserStats.GetAchievementDisplayAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::Viveport::Internal::EAchievementDisplayAttribute, ::Viveport::Internal::ELocale)>(&::Viveport::Internal::UserStats::GetAchievementDisplayAttribute)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5b4ea60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"GetAchievementDisplayAttribute", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Viveport::Internal::EAchievementDisplayAttribute>(), ::i2c::type_of<::Viveport::Internal::ELocale>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::UserStats.GetAchievementIcon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::Viveport::Internal::UserStats::GetAchievementIcon)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5b4e838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"GetAchievementIcon", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::UserStats.DownloadLeaderboardScores
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Viveport::Internal::StatusCallback*, ::StringW, ::Viveport::Internal::ELeaderboardDataRequest, ::Viveport::Internal::ELeaderboardDataTimeRange, int32_t, int32_t)>(&::Viveport::Internal::UserStats::DownloadLeaderboardScores)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x5b4efd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"DownloadLeaderboardScores", {}, {::i2c::type_of<::Viveport::Internal::StatusCallback*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Viveport::Internal::ELeaderboardDataRequest>(), ::i2c::type_of<::Viveport::Internal::ELeaderboardDataTimeRange>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::UserStats.UploadLeaderboardScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Viveport::Internal::StatusCallback*, ::StringW, int32_t)>(&::Viveport::Internal::UserStats::UploadLeaderboardScore)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5b4f4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"UploadLeaderboardScore", {}, {::i2c::type_of<::Viveport::Internal::StatusCallback*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::UserStats.GetLeaderboardScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Viveport::Leaderboard* (*)(int32_t)>(&::Viveport::Internal::UserStats::GetLeaderboardScore)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5b4f69c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"GetLeaderboardScore", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::UserStats.GetLeaderboardScoreCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Viveport::Internal::UserStats::GetLeaderboardScoreCount)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5b4f938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"GetLeaderboardScoreCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::UserStats.GetLeaderboardSortMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Viveport::Internal::ELeaderboardSortMethod (*)()>(&::Viveport::Internal::UserStats::GetLeaderboardSortMethod)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5b4fa14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"GetLeaderboardSortMethod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::UserStats.GetLeaderboardDisplayType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Viveport::Internal::ELeaderboardDisplayType (*)()>(&::Viveport::Internal::UserStats::GetLeaderboardDisplayType)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5b4faf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"GetLeaderboardDisplayType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Viveport::Internal::UserStats._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Viveport::Internal::UserStats::*)()>(&::Viveport::Internal::UserStats::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b59bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Viveport::Internal::UserStats::IsReady(::Viveport::Internal::StatusCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"IsReady", {}, {::i2c::type_of<::Viveport::Internal::StatusCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, callback);
}
inline int32_t Viveport::Internal::UserStats::DownloadStats(::Viveport::Internal::StatusCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"DownloadStats", {}, {::i2c::type_of<::Viveport::Internal::StatusCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, callback);
}
inline int32_t Viveport::Internal::UserStats::UploadStats(::Viveport::Internal::StatusCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"UploadStats", {}, {::i2c::type_of<::Viveport::Internal::StatusCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, callback);
}
inline int32_t Viveport::Internal::UserStats::SetStat(::StringW  pchName, int32_t  nData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"SetStat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pchName, nData);
}
inline int32_t Viveport::Internal::UserStats::SetStat(::StringW  pchName, float_t  fData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"SetStat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pchName, fData);
}
inline int32_t Viveport::Internal::UserStats::GetStat(::StringW  pchName, int32_t  nData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"GetStat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pchName, nData);
}
inline float_t Viveport::Internal::UserStats::GetStat(::StringW  pchName, float_t  fData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"GetStat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, pchName, fData);
}
inline bool Viveport::Internal::UserStats::GetAchievement(::StringW  pchName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"GetAchievement", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pchName);
}
inline int32_t Viveport::Internal::UserStats::GetAchievementUnlockTime(::StringW  pchName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"GetAchievementUnlockTime", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pchName);
}
inline int32_t Viveport::Internal::UserStats::SetAchievement(::StringW  pchName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"SetAchievement", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pchName);
}
inline int32_t Viveport::Internal::UserStats::ClearAchievement(::StringW  pchName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"ClearAchievement", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pchName);
}
inline ::StringW Viveport::Internal::UserStats::GetAchievementDisplayAttribute(::StringW  pchName, ::Viveport::Internal::EAchievementDisplayAttribute  attr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"GetAchievementDisplayAttribute", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Viveport::Internal::EAchievementDisplayAttribute>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, pchName, attr);
}
inline ::StringW Viveport::Internal::UserStats::GetAchievementDisplayAttribute(::StringW  pchName, ::Viveport::Internal::EAchievementDisplayAttribute  attr, ::Viveport::Internal::ELocale  locale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"GetAchievementDisplayAttribute", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Viveport::Internal::EAchievementDisplayAttribute>(), ::i2c::type_of<::Viveport::Internal::ELocale>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, pchName, attr, locale);
}
inline ::StringW Viveport::Internal::UserStats::GetAchievementIcon(::StringW  pchName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"GetAchievementIcon", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, pchName);
}
inline int32_t Viveport::Internal::UserStats::DownloadLeaderboardScores(::Viveport::Internal::StatusCallback*  callback, ::StringW  pchLeaderboardName, ::Viveport::Internal::ELeaderboardDataRequest  nDataRequest, ::Viveport::Internal::ELeaderboardDataTimeRange  nTimeRange, int32_t  nRangeStart, int32_t  nRangeEnd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"DownloadLeaderboardScores", {}, {::i2c::type_of<::Viveport::Internal::StatusCallback*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Viveport::Internal::ELeaderboardDataRequest>(), ::i2c::type_of<::Viveport::Internal::ELeaderboardDataTimeRange>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, callback, pchLeaderboardName, nDataRequest, nTimeRange, nRangeStart, nRangeEnd);
}
inline int32_t Viveport::Internal::UserStats::UploadLeaderboardScore(::Viveport::Internal::StatusCallback*  callback, ::StringW  pchLeaderboardName, int32_t  nScores)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"UploadLeaderboardScore", {}, {::i2c::type_of<::Viveport::Internal::StatusCallback*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, callback, pchLeaderboardName, nScores);
}
inline ::Viveport::Leaderboard* Viveport::Internal::UserStats::GetLeaderboardScore(int32_t  nIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"GetLeaderboardScore", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Viveport::Leaderboard*>(nullptr, ___internal_method, nIndex);
}
inline int32_t Viveport::Internal::UserStats::GetLeaderboardScoreCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"GetLeaderboardScoreCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::Viveport::Internal::ELeaderboardSortMethod Viveport::Internal::UserStats::GetLeaderboardSortMethod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"GetLeaderboardSortMethod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Viveport::Internal::ELeaderboardSortMethod>(nullptr, ___internal_method);
}
inline ::Viveport::Internal::ELeaderboardDisplayType Viveport::Internal::UserStats::GetLeaderboardDisplayType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {"GetLeaderboardDisplayType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Viveport::Internal::ELeaderboardDisplayType>(nullptr, ___internal_method);
}
inline void Viveport::Internal::UserStats::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Viveport::Internal::UserStats*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Viveport::Internal::UserStats* Viveport::Internal::UserStats::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Viveport::Internal::UserStats*>());
}
// Ctor Parameters []
constexpr ::Viveport::Internal::UserStats::UserStats()   {
}
