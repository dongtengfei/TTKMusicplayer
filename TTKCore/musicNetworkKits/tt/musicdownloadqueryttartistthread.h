#ifndef MUSICDOWNLOADQUERYTTARTISTTHREAD_H
#define MUSICDOWNLOADQUERYTTARTISTTHREAD_H

/* =================================================
 * This file is part of the TTK Music Player project
 * Copyright (c) 2015 - 2017 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include "musicdownloadttinterface.h"
#include "musicdownloadquerythreadabstract.h"

/*! @brief The class to ttpod query artist download data from net.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_NETWORK_EXPORT MusicDownLoadQueryTTArtistThread : public MusicDownLoadQueryThreadAbstract,
                                                              private MusicDownLoadTTInterface
{
    Q_OBJECT
public:
    explicit MusicDownLoadQueryTTArtistThread(QObject *parent = 0);
    /*!
     * Object contsructor.
     */

    static QString getClassName();
    /*!
     * Get class object name.
     */

    virtual void startSearchSong(QueryType type, const QString &artist) override;
    /*!
     * Start to Search data from name and type.
     */
    void startSearchSong(const QString &artist);
    /*!
     * Start to Search data from name and type.
     */

public Q_SLOTS:
    virtual void downLoadFinished() override;
    /*!
     * Download data from net finished.
     */

};

#endif // MUSICDOWNLOADQUERYTTARTISTTHREAD_H
